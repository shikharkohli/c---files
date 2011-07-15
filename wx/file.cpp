#include<fstream>
#include<iostream>

using namespace std;

int main()
{
	ofstream fout("abc.txt",ios::out);
    fout<<"Shikhar Kohli was here!\n"<<endl;
	fout<<"This is line 2\n";
	fout.close();
	ifstream fin("abc.txt",ios::in);
	char word;
	while(fin){char str[80];
			//fin>>word;cout<<word<<" ";
			fin.getline(str,80);
			cout<<str;}
			fin.close();
	return 0;
}	
