#include <stdio.h>
/**
 * main - this is the main action
 * Return: always 0
 */
int main(void)
{
	printf("size of a char: %1u byte(s)\n", sizeof(char));
	printf("size of a char: %1u byte(s)\n", sizeof(int));
	printf("size of a char: %1u byte(s)\n", sizeof(long int));
	printf("size of a char: %1u byte(s)\n", sizeof(long long int));
	printf("size of a char: %1u byte(s)\n", sizeof(float));
	return (0);
}
