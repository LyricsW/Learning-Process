#include <stdio.h>
int main()
{	int n;
	scanf("%d",&n);
	if(n % 3 == 0 && n % 5 == 0)
	printf ("This number is divisible by 3 and 5");
	else 
	printf ("This number is not divisible by 3 and 5 at the same time");
	return 0;
}
