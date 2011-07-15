#include<pthread.h>
#include<stdio.h> 
#include<unistd.h>
#include<stdlib.h>

#define QUEUESIZE 10
#define LOOP 20

using namespace std;

void *producer(void *args);
void *consumer(void *args);

typedef struct{
int buf[QUEUESIZE];
long head, tail;
int full, empty;
pthread_mutex_t *mut;
pthread_cond_t *notFull, *notEmpty;
}queue;

queue *queueInit(void);
void queueDelete(queue *q);
void queueAdd(queue *q, int in);
void queueDel(queue *q, int *out);

int main()
{
	queue *fifo;
	pthread_t pro, con;
	fifo = queueInit(); 
	if( fifo == NULL)
	{
		fprintf(stderr, "main: queue Init failed.\n");
		exit(1);
	}

	pthread_create(&pro, NULL, producer, fifo);
	pthread_create(&con, NULL, consumer, fifo);
	pthread_join(pro, NULL);
	pthread_join(con, NULL);
	queueDelete(fifo);
	return 0;
}

void *producer(void *q)
{
	queue *fifo;
	int i;
	fifo = (queue *) q;
	for(i=0; i<LOOP;i++)
	{
		pthread_mutex_lock(fifo->mut);
		while(fifo->full)
		{
			printf("Produce:queue full.\n");
			pthread_cond_wait(fifo->notFull, fifo->mut);
		}

	queueAdd(fifo,i);
	pthread_mutex_unlock(fifo->mut);
	pthread_cond_signal(fifo->notEmpty);
	printf("Producer: put %d.\n", i);
	usleep(100000);
	}

	for(i=0; i<LOOP;i++)
	{
		pthread_mutex_lock(fifo->mut);
		while(fifo->full)
		{
			printf("Produce:queue full.\n");
			pthread_cond_wait(fifo->notFull, fifo->mut);
		}
		queueAdd(fifo,i);
		pthread_mutex_unlock(fifo->mut);
		pthread_cond_signal(fifo->notEmpty);
		printf("Producer: put %d.\n", i);
		usleep(200000);
	}
	return(NULL);
}


void *consumer(void *q)
{
	queue *fifo;
	int i,d;
	fifo = (queue *) q;
	for(i=0; i<LOOP;i++)
	{
		pthread_mutex_lock(fifo->mut);
		while(fifo->empty)
		{
			printf("Consumer:queue empty.\n");
			pthread_cond_wait(fifo->notEmpty, fifo->mut);
		}
	
		queueDel(fifo,&d);
		pthread_mutex_unlock(fifo->mut);
		pthread_cond_signal(fifo->notFull);
		printf("consumer: received %d.\n", d);
		usleep(200000);
	}
	for(i=0; i<LOOP;i++)
	{
		pthread_mutex_lock(fifo->mut);
		while(fifo->empty)
		{
			printf("Consumer:queue empty.\n");
			pthread_cond_wait(fifo->notEmpty, fifo->mut);
		}

		queueDel(fifo,&d);
		pthread_mutex_unlock(fifo->mut);
		pthread_cond_signal(fifo->notFull);
		printf("consumer: received %d.\n", d);
		usleep(50000);
	}
	return(NULL);
}

queue *queueInit()
{
	queue *q;
	q= (queue *) malloc(sizeof(queue));
	if(q==NULL) return(NULL);
	q->empty = 1;
	q->full = 0;
	q->head =0;
	q->tail=0;
	q->mut = (pthread_mutex_t *) malloc(sizeof(pthread_mutex_t));
	pthread_mutex_init(q->mut, NULL);
	q->notFull= (pthread_cond_t *) malloc(sizeof(pthread_cond_t));
	pthread_cond_init(q->notFull, NULL);
	q->notEmpty = (pthread_cond_t *) malloc(sizeof(pthread_cond_t));
	pthread_cond_init(q->notEmpty, NULL);
	return(q);
}

void queueDelete(queue *q)
{
	pthread_mutex_destroy(q->mut);
	free(q->mut);
	pthread_cond_destroy(q->notFull);
	free(q->notFull);
	pthread_cond_destroy(q->notEmpty);
	free(q->notEmpty);
	free(q);
}

void queueAdd(queue *q, int in)
{
	q->buf[q->tail] = in;
	q->tail++;
	if(q->tail == QUEUESIZE)
		q->tail =0;
	if(q->tail == q->head)
		q->full =1;
	q->empty =0;
	return;
}

void queueDel(queue *q, int *out)
{
	*out = q->buf[q->head];
	q->head++;
	if(q->head == QUEUESIZE)
		q->head =0;
	if(q->tail == q->head)
		q->empty =1;
	q->full =0;
	return;
}

/*
consumer: received 0.
Producer: put 0.
Producer: put 1.
consumer: received 1.
Producer: put 2.
Producer: put 3.
consumer: received 2.
Producer: put 4.
Producer: put 5.
consumer: received 3.
Producer: put 6.
Producer: put 7.
consumer: received 4.
Producer: put 8.
Producer: put 9.
consumer: received 5.
Producer: put 10.
Producer: put 11.
consumer: received 6.
Producer: put 12.
Producer: put 13.
consumer: received 7.
Producer: put 14.
Producer: put 15.
consumer: received 8.
Producer: put 16.
Producer: put 17.
consumer: received 9.
Producer: put 18.
Producer: put 19.
consumer: received 10.
Producer: put 0.
consumer: received 11.
Producer: put 1.
consumer: received 12.
Producer: put 2.
consumer: received 13.
Producer: put 3.
consumer: received 14.
Producer: put 4.
consumer: received 15.
Producer: put 5.
consumer: received 16.
Producer: put 6.
consumer: received 17.
Producer: put 7.
consumer: received 18.
Producer: put 8.
consumer: received 19.
Producer: put 9.
consumer: received 0.
Producer: put 10.
consumer: received 1.
consumer: received 2.
consumer: received 3.
consumer: received 4.
Producer: put 11.
consumer: received 5.
consumer: received 6.
consumer: received 7.
consumer: received 8.
Producer: put 12.
consumer: received 9.
consumer: received 10.
consumer: received 11.
Producer: put 13.
consumer: received 12.
consumer: received 13.
Consumer:queue empty.
Producer: put 14.
consumer: received 14.
Consumer:queue empty.
Producer: put 15.
consumer: received 15.
Consumer:queue empty.
Producer: put 16.
consumer: received 16.
Consumer:queue empty.
Producer: put 17.
consumer: received 17.
Consumer:queue empty.
Producer: put 18.
consumer: received 18.
Consumer:queue empty.
Producer: put 19.
consumer: received 19.
*/
