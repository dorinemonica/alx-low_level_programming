#include <stdio.h>

/**
 * main - main function entry
 *
 * printf displays the output
 *
 * Return: (0) success
 */

int main(void)
{
	printf("size of a char: %lu byte(s)", sizeof(char));
	printf("Size of an int: %lu byte(s)", sizeof(int));
	printf("Size of a long int: %lu byte(s)", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)", sizeof(long long int));
	printf("Size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
