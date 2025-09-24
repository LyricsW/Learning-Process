#include <stdio.h>
int main()
{	char c_1,c_2;//定义字符类型数据c_1和c_2 
	scanf("%c",&c_1);//输入一个字符（大写字母） 
	c_2 = c_1 + 32 ;//这里将c_1对应的ASCII码的十进制形式与32相加,得到大写字母c_1对应的小写字母的ASCII码，并将其赋值给c_2 
	printf("%c",c_2);
	return 0;
 } 
