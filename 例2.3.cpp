#include <stdio.h>
int main() 
{	int year=2000,remainder_1,remainder_2,remainder_3;
	while (year<=2500)
	{
		remainder_1=year % 4;
		remainder_2=year % 100;
		remainder_3=year % 400;
		if(remainder_1!=0) printf("%d不是闰年\n",year);
		else
			if(remainder_2!=0) printf("%d是闰年\n",year);
			else 
				if (remainder_3==0) printf("%d是闰年\n",year);
				else printf("%d不是闰年\n",year);
		year=year+1;
	}
	return 0;
}
