#include <stdio.h>

/**
* main - Prints out lowercase letters in reverse from z
*
* Return: int
*/
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
