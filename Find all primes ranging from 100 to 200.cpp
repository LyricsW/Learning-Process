#include <stdio.h>
#include <math.h>
int main()
{	int i=100;
	int b;
	int prime(int n); 
	for (i=100;i<=200;i++) 
	{	b = prime(i);
		if (b != 1)
		printf("%d\n",i);
	}
	return 0;
	
	
}
int prime(int n)
{	int j=2,t=0;
	while (j <= sqrt(n))
	{
	if (n % j == 0)
	return (1);
	else
	j++;
	} 
}
