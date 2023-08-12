#include <stdio.h>

/*
 *main - prints alphabit in lowercase then in upper case
 *followed by a new line
 *Return: retun 0 everytime
 */


int main(void)
{
	char m;
	char x;
	for (m = 'a'; m <= 'z'; m++)
	{
		putchar(m);
	}

	for (x = 'A'; x <= 'Z' ; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
