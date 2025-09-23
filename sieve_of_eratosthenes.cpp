#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void sieve_of_eratosthenes(int n,int **result)
{	int *is_prime =(int*)malloc((n+1)*sizeof(int));
	if (is_prime == NULL )
	return;
	for (int i=0;i <= n; i ++ )
	{	is_prime[i]=1;}
	is_prime[0]=0;
	is_prime[1]=0;
	for (int p = 2; p <= sqrt(n) ; p++)
	if (is_prime[p]==1)
	{
		for (int t = p * p; t <= n ; t += p )
		{is_prime[t]=0;}
	};
	*result=is_prime;
}
int main()
{	
int k;
int p = 0;
int *is_prime = NULL;
scanf("%d",&k);
sieve_of_eratosthenes(k,&is_prime);
	if (is_prime == NULL)
	{
	printf("NULL\n");
	return 1;}
	else
	{
	for (int j = 1; j <= k ; j ++)
{	if (is_prime[j]==1)
	p ++;
	}
	}
printf("The number of primes in [2 , %d] is %d", k,p);
free (is_prime); 
return 0;
}
