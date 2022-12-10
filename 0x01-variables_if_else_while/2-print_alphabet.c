#include <stdio.h>
#include <ctype.h>
/**
*main - Program to print alphabet letter followed by new line
*/
int main(void)
{
	int l;
	
	for (l = 'a'; l <= 'z'; l++)
	{
		
		putchar(l);
	}
	putchar('\n');
	return (0);
}