#include <stdio.h>

/**
* main - Prints numbers 0 to 9 from their given ascii codes 
*
* Return: int
*/
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
