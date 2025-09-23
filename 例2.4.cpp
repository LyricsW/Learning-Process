#include <stdio.h>
int main()
{
	int i = 1,sgn = 1;
	double sum = 0.0, term;
	while (i <= 100)
	{	term=(double)sgn/(double)i;//To avoid integer division.Btw,"double=(double)sgn/i" can avoid integer division as well.
		sum=sum+term;			
		sgn=-sgn;
		i=i+1;
	}
	printf("Sum is %f\n",sum);
	return 0;
}
