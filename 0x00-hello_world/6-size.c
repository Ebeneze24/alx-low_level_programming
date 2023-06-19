#include <stdio.h>

/**
* main - Main entry to the program
 *
 * Return: int
*/
int main(void)
{
	int cSize = sizeof(char);
	int iSize = sizeof(int);
	int liSize = sizeof(long int);
	int lliSize = sizeof(long long int);
	int fSize = sizeof(float);

	printf("Size of a char: %i byte(s)\n", cSize);
	printf("Size of an int: %i byte(s)\n", iSize);
	printf("Size of a long int: %i byte(s)\n", liSize);
	printf("Size of a long long int: %i byte(s)\n", lliSize);
	printf("Size of a float: %i byte(s)\n", fSize);

	return (0);
}
