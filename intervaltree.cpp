#include<iostream>

using namespace std;

struct node
{
	int low,maxhigh;
	node *left,*right;
};

class inttree
{
	private:
		node *ROOT;
	public:
		inttree()
		{
			ROOT=NULL;
		}
		void insert(int lo,int hi)
		{
			node *temp=new node;
			temp->low=lo;
			temp->maxhigh=hi;
			temp->left=temp->right=NULL;
			if(ROOT==NULL)
			{
				ROOT=temp;
				return;
			}
			node *parent=NULL;
			node *child=ROOT;
			while(child!=NULL)
			{
				parent=child;
				if(temp->low<child->low){
					child=child->left;
					if(temp->maxhigh>child->maxhigh)
						child->maxhigh=temp->maxhigh;
				}
				if(temp->low>child->low)
				{
					if(temp->maxhigh>child->maxhigh)
						child->maxhigh=temp->maxhigh;
					child=child->right;
				}
				if(temp->low==child->low)
				{
					if(temp->maxhigh>child->maxhigh)
						child=child->right;
					else
						child=child->left;
				}
			}
			if(temp->low<parent->low)
				parent->left=temp;
		    if(temp->low>parent->low)
				parent->right=temp;
			if(temp->low==parent->low)
			{
				if(temp->maxhigh>parent->maxhigh)
					parent->right=temp;
				else
					parent->left=temp;
			}
		}
		void search(int lo,int hi)
		{
			node *temp=ROOT;
			while(!(lo<=temp->maxhigh && hi>=temp->low) && !(temp->low<=lo && temp->maxhigh>=hi))
			{
				if(temp->low > lo && temp->maxhigh>hi)
					temp=temp->left;
				if(temp->low < lo && temp->maxhigh>hi)
					temp=temp->right;
			}
			cout<<"Found!"<<endl;

		}
};

int main()
{
	inttree T;
	T.insert(1,10);
	T.insert(2,11);
	T.search(3,5);
	return 0;
}
