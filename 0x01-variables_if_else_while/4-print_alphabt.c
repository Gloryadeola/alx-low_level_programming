#include<stdio.h>

/**
 * main - prints alphabets in lowercase with an exception of q and e
 * followed by a new line
 * Return: 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
			continue;
		putchar(ch);
	}

	putchar('\n');
	return (0);
}
