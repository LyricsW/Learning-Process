//This assignment is designed to practise the usage of LOOP STRUCTURE
#include <stdio.h>
int main()
{	int i=1,max,temp;
	scanf("%d",&max);
	for (i=2;i <=10;i++)
	{
	scanf("%d",&temp);
	if(temp > max)
	max = temp;
	 }
	printf("The maximum among these 10 integers is %d",max);
	return 0;
}
	
