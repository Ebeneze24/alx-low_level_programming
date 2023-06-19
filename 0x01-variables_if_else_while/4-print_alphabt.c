#include <stdio.h>

/**
* main - Print all lowercase letters except q & e
*
* Return: int
*/
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
		if (i != 113 && i != 101)
		{
			putchar(i);
		}
	putchar('\n');
	return (0);
}