#include <stdio.h>
int main ()
{	int m,n,g;
	int gcd(int x,int y);
	scanf("%d %d",&m,&n);
	g=gcd(m,n);
	printf("%d",g);
}
int gcd(int x,int y)//���迼��x,y����Դ�С����x<yʱ����gcd(x,y)=gcd(y,x) 
{ 	if (y==0)
	return (x);
	else 
	return gcd(y,x%y);//�ݹ� 
	
	
	
}
