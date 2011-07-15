#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

class str{
	char abc[80];
	public:
	str(){strcpy(abc,"\0");}
	str(char line[]){strcpy(abc,line);}
	int len(){return strlen(abc);}
	void print();
	void operator+(str b);
	void operator++();
	void operator++(int x);
	void operator==(char str[80]);
};

void str::operator==(char str[80])
{
    if(strcmp(abc,str)==0)
	    cout<<"Equal";
    else
	    cout<<"Unequal";
}

void str::print()
{
    cout<<abc;
}

void str::operator+(str b)
{
    char temp[160];
    strcpy(temp,"\0");
    strcat(temp,abc);
    strcat(temp,b.abc);
    cout<<temp;
}

void str::operator++()
{
    abc[0]+=32;
    cout<<abc;
}

void str::operator++(int x)
{
    abc[0]-=2;
    cout<<abc;
}

int main()
{
    cout<<sizeof(short int)<<endl;
    str word1("This line");str word2("That line");
    word1+word2;cout<<endl;
    ++word1;cout<<endl;word2++;
    char def[80];
    strcpy(def,"this line");
    word1==def;
    return 0;
}
