//Matrix rotate
#include<iostream>
#include<cstring>
#include<cmath>

using namespace std;

void rotate(char matrix[3][6],int degree,char ans[100][100])
{
    float rot[2][2];
    rot[0][0]=cos((float)((degree*3.14)/180))*1.5;
    rot[0][1]=-sin((float)((degree*3.14)/180))*1.5;
    rot[1][0]=sin((float)((degree*3.14)/180))*1.5;
    rot[1][1]=cos((float)((degree*3.14)/180))*1.5;
    for(int i=0;i<3;i++)
	    for(int j=0;j<6;j++)
	    {
		int x=(i)*rot[0][0]+(j)*rot[0][1];
		int y=(i)*rot[1][0]+(j)*rot[1][1];
	        cout<<"("<<i<<","<<j<<") --> ("<<x<<","<<y<<")"<<endl;
		ans[15+x][15+y]=matrix[i][j];
	    }
}


int main()
{
    char matrix[3][6];
    strcpy(matrix[0],"rotate");
    strcpy(matrix[1],"letter");
    strcpy(matrix[2],"tables");
    char ans[100][100];
    for(int i=0;i<100;i++)
	    for(int j=0;j<100;j++)
		    ans[i][j]=' ';
		    {}
    rotate(matrix,360-45,ans);
    for(int i=0;i<50;i++)
    {
	    for(int j=0;j<50;j++)
	    {
		    //if(ans[i][j]!=' ')
			    cout<<ans[i][j];
	    }
	    cout<<endl;
    }
    return 0;
}
