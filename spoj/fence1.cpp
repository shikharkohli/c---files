#include<cstdio>

int main()
{
	int l;
	while(scanf("&d",&l) && l!=0)
		printf("%0.2f",double((l*l)/(2*3.14159265)));
	return 0;
}
