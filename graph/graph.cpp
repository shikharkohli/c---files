#include<iostream>
#define NODE 1
#define EDGE 2
using namespace std;

struct node
{
	string name;
	node *next;
	short int status;
};

class graph
{
	node *start;
	public:
	graph()
	{
		start=NULL;
	}
	void insertnode(string name);
	void insertedge(string path);


int main()
{
    
