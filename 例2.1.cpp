#include <stdio.h>
int main() 
{
    int i = 1, j = 2;
    while (j <= 5) 
	{
        i = i * j;  
        j = j + 1;  
    }
    printf("%d", i); 
    return 0;
}
