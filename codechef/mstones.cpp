#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<map>
#include<climits>
#define INF 0x7fffffff 

using namespace std;

int gcd(int a,int b)
{
	if(a<0)
		a*=-1;
	if(b<0)
		b*=-1;
	int temp;
	while((b%a)!=0)
	{
		temp=a;
		a=b%a;
		b=temp;
	}
	return a;
}

int collinear(int x1,int y1,int x2,int y2,int x3,int y3)
{
	int ar=0;
	ar+=x1*(y2-y3);
	ar+=x2*(y3-y1);
	ar+=x3*(y1-y2);
	if(ar==0)
		return 1;
	return 0;
}

double slope(pair<int,int> a,pair<int,int> b)
{
	if(a.first==b.first)
		return INF;
	else
		return (double)((double)(a.second-b.second)/(double)(a.first-b.first));
}

int find(vector < pair <int,int> > points)
{
	int num=0;
	for(int i=0;i<points.size();i++)
	{	
		double temp;
		//cout<<"("<<points[i].first<<","<<points[i].second<<") ";
		vector<double> slopes;int j;
		for( j=i+1;j<points.size();j++)
			slopes.push_back(slope(points[i],points[j]));
		
		sort(slopes.begin(),slopes.end());
		//for(int i=0;i<slopes.size();i++)
		//	cout<<slopes[i]<<" ";
		//cout<<"("<<points[j-1].first<<","<<points[j-1].second<<" ) ";
		//cout<<endl;
		int count=0;
		for(int k=0;k<slopes.size();)
		{
			temp=slopes[k];count=0;//cout<<slopes[k]<<endl;
			while(slopes[k++]==temp) count+=1;
			if(count>num)
				num=count;
		}
	}
	return num+1;
}


/*int findcol(vector < pair < int,int > > points)
{
	int max=-1;
	for(int i=0;i<points.size();i++)
	{	
		int tempcount=2;
		int slope_y=points[i+1].second-points[i].second;
		int slope_x=points[i+1].first-points[i].first;
		int inf=0;
		cout<<"("<<points[i].first-15000<<","<<points[i].second-15000<<") -> ";
		cout<<"("<<points[i+1].first-15000<<","<<points[i+1].second-15000<<") ";
		if((slope_x & slope_y)!=0)
		{
			int temp=gcd(slope_x,slope_y);
			slope_x/=temp;
			slope_y/=temp;
		}
		else
			inf=1;
		for(int j=i+2;j<points.size();j++)
		{
			int slope_y1=points[j].second-points[i].second;
			int slope_x1=points[j].first-points[i].first;
			if((slope_y1 & slope_x1)!=0 && inf!=1)
			{
				int temp=gcd(slope_y1,slope_x1);
				slope_y1/=temp;slope_x1/=temp;
			
			if((slope_x*slope_y)==(slope_y1*slope_x1))
				tempcount++;
			cout<<"("<<points[j].first-15000<<","<<points[j].second-15000<<") ";
			}
			else
			if(inf==1 && ((slope_x1 & slope_y1)==0))
				tempcount++;

		}
		cout<<endl;
		if(tempcount>max)
			max=tempcount;
	}
	return max+2;
}
*/

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		vector< pair < int,int > > points(0);
		int n;
		scanf("%d",&n);
		if(n==2)
		{
			cout<<n<<endl;
			continue;
		}
		while(n--)
		{
			int x,y;
			scanf("%d%d",&x,&y);
			x+=15001;
			y+=15001;
			pair<int,int> temp;
			temp.first=x;temp.second=y;
			points.push_back(temp);
		}
		printf("%d\n",find(points));//<<endl;
	}
	return 0;
}
			
