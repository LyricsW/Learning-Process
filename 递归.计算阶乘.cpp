#include <stdio.h>
int main()
{
	int factorial(int x);
	int n,k;
	scanf("%d",&n);
	k=factorial(n);
	printf("%d",k);
	return 0;
}

int factorial(int x)
{	int c;
	if (x==0)
	c = 1 ;//base case 
	else
	c = x * factorial(x-1); //recursive case
	return c;
 } 
