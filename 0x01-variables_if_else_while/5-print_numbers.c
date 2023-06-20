#include<stdio.h>

/**
 * main - print all single didgits of base 10 starting from 0
 * followed by a new line
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
