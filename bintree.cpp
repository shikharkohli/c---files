//Level by level traversal
#include<iostream>
#include<queue>
#include<stack>

using namespace std;

struct node
{
	char data;
	node *left;
	node *right;
};

class tree{
	node *ROOT;
	public:
	tree(){ROOT=NULL;}
	void insert();
	node * retroot(){return ROOT;}
	void trav();
	void nthlargest(node *,int,int);
	void nonrectrav();
};

void tree::nonrectrav()
{
	node *temp=ROOT;
	stack<node *> s;
	do
	{
		node *temp2=temp;
		left:
		while(temp!=NULL)
		{
			s.push(temp);
			temp2=temp;
			temp=temp->left;
		}
		temp2=temp2->right;
		while(temp2!=NULL)
		{
			s.push(temp2);
			if(temp2->left!=NULL)
				goto left;
			temp2=temp2->right;
		}
		if(!s.empty())
		{
			node *temp1=s.top();
			s.pop();
			cout<<temp1->data<<", ";
			temp=temp1->left;
		}
	}while(!s.empty() || temp!=NULL);
}

void tree::insert()
{

	node *temp=new node;
	cin>>temp->data;
	temp->left=NULL;
	temp->right=NULL;
	if(ROOT==NULL)
	{
		ROOT=temp;
		return ;
	}	
	node *first=ROOT;
	//cout<<first<<","<<first->right<<","<<first->left<<endl;
	//cout<<temp->data<<endl;
	node *second=NULL;
	while(first)
	{
		second=first;
		//cout<<"Looping..."<<endl;
		if(temp->data < first->data)
		{	first=first->left;}
		else 
			first=first->right;
		/*else{
				cout<<"Greater than, going right"<<endl;
				if(first->right!=NULL)
				{	node *temp1=first->right;
					first=temp1;}
				else
					first=NULL;
			}*/

	//cout<<second->data<<"  "<<first->data<<endl;
	}
	if(second==NULL)
		return;
	if(temp->data >= second->data)
	{
		//cout<<"greater than";	
		second->right=temp;}
	else
		second->left=temp;
	//cout<<second->data<<endl;
}


//BFS of the tree
void tree::trav()
{
	//if(ROOT==NULL)
	//	return;
	queue<node *> q;
	q.push(ROOT);
	while(!q.empty())
	{
	//	if(q.front()!=NULL){
			
			cout<<q.front()->data<<endl;
			node *temp=q.front();
			q.pop();
			if(temp->left!=NULL) q.push(temp->left);
			if(temp->right!=NULL) q.push(temp->right);
	//	}
	//	else
//			break;
	}
}

/*void tree::nthlargest(node *root,int n,int i)
{
	if(n==i)
		cout<<"Fifth largest is "<<root->data;
	
	node *temp=root;
	while(temp->left!=NULL)
		temp=temp->left;
	cout<<i<<" element is "<<temp->data<<endl;
	if(temp->right!=NULL) 
		this->nthlargest(temp->right,n,i+1);
	//node is a leaf
	else
	{	
		node *temp1=root;
		while(temp1->left->data!=temp->data) //locate parent
			temp1=temp1->left;
		cout<<i+1<<" element is "<<temp1->data<<endl;
		this->nthlargest(temp1->right,n,i+1);
	}
}*/

void tree::nthlargest(node *root,int n,int i)
{
	if(root->left!=NULL)
		this->nthlargest(root->left,n,i+1);
     if(n==i)	
		cout<<"The element is "<<root->data<<endl;
	if(root->right!=NULL)
		this->nthlargest(root->right,n,i+1);
}	

int main()
{
	tree t;
	for(int i=0;i<9;i++)
		t.insert();
	t.trav();
	cout<<endl;
	t.nthlargest(t.retroot(),4,0);
	return 0;
}
