#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream fout("input.txt");
    int t=100;
    while(t>0){
        fout<<101-t<<" ";t-=1;}
    fout.close();
    return 0;
}
