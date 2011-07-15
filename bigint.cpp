#include<iostream>
#include<vector>

using namespace std;

struct bigint
{
	vector<int> num;
	bool sign;
};		

class bignum{
	bigint x;
	int sign()
	{
		if(x.sign==true)
			return 1;
		else
			return 0;
	}
	int size()
	{
		return x.num.size();
	}
	public:
	bignum()
	{
		x.sign=false;
	}
	int input(string number);
	int output();
	/*bignum operator+(bignum a);
	bignum operator-(bignum a);
	bignum operator*(bignum a);
	bignum operator/(bignum a);*/
	bool operator<(bignum a);/*
	bool operator>(bignum a);
	bool operator<=(bignum a);*/
	bool operator>=(bignum a);/*
	bool operator==(bignum a);
	bool operator=(bignum a);*/
};



int bignum::input(string number)
{
	int i=0;
	if(number[0]=='-')
		{x.sign=true;i=1;}
	for(;i<number.length();i++)
		x.num.push_back(number[i]-'0');
	return x.num.size();
}

int bignum::output()
{
	if(x.num.size()==0)
		return 0;
	for(vector<int>::iterator i=x.num.begin();i!=x.num.end();i++)
		cout<<*i;
	return x.num.size();
}


bool bignum::operator<(bignum a)
{
	if(this->sign() != a.sign())
	{
		if(this->sign()=='-')
			return true;
		else
 			return false;
	}
	if(this->size()>a.size())
		return false;
	if(this->size()<a.size())
		return true;
	for(int i=0;i<a.size();i++)
	{
		if(this->x.num[i]<a.x.num[i])
			return true;
	}
	return false;
}

bool bignum::operator>=(bignum a)
{
	return ~(*this<a);
}

/*
bignum operator+(bignum a){}
bignum operator-(bignum a){}
bignum operator*(bignum a){}
bignum operator/(bignum a){}
bool operator>(bignum a){}
bool operator<=(bignum a){}
bool operator==(bignum a){}
bool operator=(bignum a){}
*/	
int main()
{
    bignum y;
    string temp="123456789101112131415161718";
    y.input(temp);
    y.output();cout<<endl;
    bignum z;
    z.input("1");
    if(z>=y)
	cout<<"It works"<<endl;
	return 0;
}
    
