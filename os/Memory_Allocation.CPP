#include<conio.h>
#include<stdio.h>
#include<iostream.h>

class memall
{
	int avhl[25],n;
	int req;

	public :
	void getdata();
	void firstfit();
	void bestfit();
	void worstfit();

};

void memall :: getdata()
{
	cout<<"\n\nEnter the total number of available holes: ";
	cin>>n;
        cout<<"\n\n";

	for(int i=0;i<n;i++)
	{
		cout<<"\nEnter the size of hole "<<i+1<<": ";
		cin>>avhl[i];
	}

	cout<<"\n\n Enter the memory space required for the process :";
	cin>>req;
}

void memall :: firstfit()
{
	int k=0;
	for(int j =0;j < n;j++)
	{
		if(avhl[j] > req)
		{
			k++;
			break;
		}
	}

	if(k==0)
	{
		cout<<"\n\n No hole is big enough for this process..";
	}
	else
	{
		cout<<"\n\n Hole no "<<j+1<<" is allocated of size "<<avhl[j];
	}
}

void memall :: worstfit()
{
	int maxsize = avhl[0];
	int k;
	for(int j=1;j < n;j++)
	{
		if(maxsize <= avhl[j])
		{
			maxsize=avhl[j];
			k = j;
		}
	}

	if(maxsize >= req)
	{
		cout<<"\n\n  Hole no "<<k+1<<" is allocated of size "<<avhl[k];
	}
	else
	{
		cout<<"\n\n No hole is big enough for the process..";
	}
}

void memall :: bestfit()
{
	int size,k=0;
	size = avhl[0];

        for(int l=1;l < n;l++)
	{
		if(size <= avhl[l])
		{
			size=avhl[l];
		}
	}


	for(int j=1;j<n;j++)
	{
		if(size >= avhl[j] && avhl[j] >= req)
		{
			size = avhl[j];
			k=j;
		}
	}

	if(size >= req)
	{
		cout<<"\n\n The best possible fit is at hole "<<k+1<<" of size "<<avhl[k];
	}
	else
	{
		cout<<"\n\n No hole is big enough for this process..";
	}
}

void main()
{
	int ch;
	memall o1;

        clrscr();
        cout<<"\n\n\t\t\t MEMORY ALLOCATION";

	o1.getdata();

	clrscr();

	while(1){
	cout<<"\n\n\n\n\t\t Memory Allocation Method";
	cout<<"\n\n 1. First Fit";
	cout<<"\n 2. Best Fit";
	cout<<"\n 3. Worst Fit";
	cout<<"\n 4. Exit";
	cout<<"\n\n Enter your choice :";
	cin>>ch;
	if(ch == 4)
	{
		break;
	}

	switch(ch)
	{
		case 1 : o1.firstfit();
			break;
		case 2 : o1.bestfit();
			break;
		case 3 : o1.worstfit();
			break;
	}
	getch();
	}
}