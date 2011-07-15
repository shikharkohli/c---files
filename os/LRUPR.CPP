#include<iostream.h>
#include<conio.h>

struct page
{
	int number;
	int time;
};

void print(page arr[],int lim)
{
     for(int i=0;i<lim;i++)
	     cout<<arr[i].number<<" ";//<<"->"<<arr[i].time<<"  ";
}

int findrepr(page arr[],int lim,int num)
{
	for(int i=0;i<lim;i++)
		if(num==arr[i].number)
			return i+1;
	return 0;
}

int findmax(page arr[],int num_of_pages,int t)
{
	int temp=t-arr[0].time;int pos=0;
	for(int i=0;i<num_of_pages;i++)
	{
		if((t-arr[i].time)>temp)
		{
			temp=t-arr[i].time;
			pos=i;
		}
	}
	return pos;
}

int main()
{
    clrscr();
    int num_of_pages,k;
    int reference_string[20];
    cout<<"Enter reference string ";
    for(int i=0;i<20;i++)
    {
	    cin>>reference_string[i];
    }
    cout<<"Enter the number of pages ";
    cin>>num_of_pages;
    page repr[10];
    for(i=0;i<10;i++)
    {
	repr[i].number=-1;
	repr[i].time=0;
    }
    cout<<"The pages will be replaced as follows (-1 denotes empty slot)\n";
    for(i=0;i<20;i++)
    {
	int temp=reference_string[i];
	if(findrepr(repr,num_of_pages,temp))
	{
		k=findrepr(repr,num_of_pages,temp);
	       if(k!=0)	repr[k-1].time=i+1;
	}
	else
	{
	   int k=findmax(repr,num_of_pages,i);
	   repr[k].number=temp;
	   repr[k].time=i+1;
	   print(repr,num_of_pages);cout<<"\n";
	}

    }
    getch();
    return 0;
}

/*
Enter reference string 7 0 1 2 0 3 0 4 2 3 0 3 2 1 2 0 1 7 0
Enter the number of pages 3
The pages will be replaced as follows (-1 denotes empty slot)
7 -1 -1
7 0 -1
7 0 1
2 0 1
2 0 3
4 0 3
4 0 2
4 3 2
0 3 2
1 3 2
1 0 2
1 0 7

*/













