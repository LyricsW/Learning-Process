#include <stdio.h>
#include <math.h>//For sqrt
int main()
{ 	int n,i=2;
	scanf("%d",&n);
	if(n==1)
	{	printf("This number is not a prime");
		return 0;
	}//To rule out the special number 1
 	while (i<=sqrt(n))
 	{	if(n%i==0)
 		{	printf("This number is not a prime\n");
 			return 0;
		 }
 		else
 		{	i=i+1;
		 }
 	} 
 	printf("This number is a prime\n");
	return 0;
 } 
