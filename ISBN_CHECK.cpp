#include <stdio.h> 
int main ()
{	int digit[9];
	char L;//����ʶ����Ϊ�ַ����ͣ���Ϊ�ַ���������ͨ��"char L-'0'"����ת��Ϊ�������� 
	scanf("%1d-%1d%1d%1d-%1d%1d%1d%1d%1d-%c",&digit[0],&digit[1],&digit[2],&digit[3],&digit[4],&digit[5],&digit[6],&digit[7],&digit[8],&L);
	int sum = 0;                                                                      														
	for (int i = 0 ; i < 9 ; i ++ )
	{	sum +=  digit[i] * (i+1);
	}
	int expected_check = sum % 11 ; 
	char actual_check = L ;
	if ( expected_check == 10 && actual_check == 'X' )
	printf("Right");
	else if ( expected_check != 10 && actual_check-'0'==expected_check)//���������check 
	printf("Right");
	else//if-elseif-else��飨��������Ҫ��������һ�����̣����¼�A���¼�B���¼�A���¼�Bͨ���ǻ���ģ�Ϊ��ʱ��p;�¼�A���¼�BΪ��ʱ��q�������ʹ��if-elseif-else��� 
	{
		if ( expected_check == 10)
		L = 'X' ;
		else 
		L = expected_check + '0';//ͨ���ӷ������ַ�����ת��Ϊ�������ͣ�ע��:����ת��Ϊ����ASCII�룩 
	printf("%1d-%1d%1d%1d-%1d%1d%1d%1d%1d-%c",digit[0],digit[1],digit[2],digit[3],digit[4],digit[5],digit[6],digit[7],digit[8],L) ;
	}
	return 0;
}
