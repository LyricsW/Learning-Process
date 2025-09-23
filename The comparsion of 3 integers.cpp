#include <stdio.h>
#include <math.h>
int main()
{	int max(int x,int y);//Declaration of the artificially defined f:max(x,y)
	int a,b,c,i,j;
	scanf("%d,%d,%d",&a,&b,&c);
	i=max(a,b);
	j=max(i,c);
	printf("The maximum number integer is %d\n ",j);
	return 0;
}
int max(int x,int y)
{	int z;
	if (x>y)
	{z=x;}
	else
	{z=y;}
	return (z);
}
