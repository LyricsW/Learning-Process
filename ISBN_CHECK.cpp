#include <stdio.h> 
int main ()
{	int digit[9];
	char L;//定义识别码为字符类型，因为字符类型容易通过"char L-'0'"操作转换为整数类型 
	scanf("%1d-%1d%1d%1d-%1d%1d%1d%1d%1d-%c",&digit[0],&digit[1],&digit[2],&digit[3],&digit[4],&digit[5],&digit[6],&digit[7],&digit[8],&L);
	int sum = 0;                                                                      														
	for (int i = 0 ; i < 9 ; i ++ )
	{	sum +=  digit[i] * (i+1);
	}
	int expected_check = sum % 11 ; 
	char actual_check = L ;
	if ( expected_check == 10 && actual_check == 'X' )
	printf("Right");
	else if ( expected_check != 10 && actual_check-'0'==expected_check)//创建互斥的check 
	printf("Right");
	else//if-elseif-else语块（当我们想要构造这样一个流程：当事件A或事件B（事件A和事件B通常是互斥的）为真时，p;事件A和事件B为假时，q，则可以使用if-elseif-else语句 
	{
		if ( expected_check == 10)
		L = 'X' ;
		else 
		L = expected_check + '0';//通过加法法将字符类型转换为整数类型（注意:不是转换为它的ASCII码） 
	printf("%1d-%1d%1d%1d-%1d%1d%1d%1d%1d-%c",digit[0],digit[1],digit[2],digit[3],digit[4],digit[5],digit[6],digit[7],digit[8],L) ;
	}
	return 0;
}
