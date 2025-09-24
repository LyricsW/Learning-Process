#include <stdio.h>
int i=0;
int main()
{	void hanoi(int n,char F,char A,char T);
	void move(char x,char y);
	int n;
	scanf("%d",&n);
	hanoi(n,'A','B','C');
	printf("%d steps",i);
	return 0;
	
};
void hanoi(int n,char F,char A,char T)
{	void move(char x, char y);
	if (n == 1)
	move(F,T);
	else
	{hanoi(n-1,F,T,A);//step1
	move(F,T);//step2
	hanoi(n-1,A,F,T);}//step3
}

void move(char x,char y)
{	printf("%c to %c\n",x,y);
	i++;
}
