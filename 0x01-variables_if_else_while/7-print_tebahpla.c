#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints lowercase alphabets in reverse
 * return: 0 success
 */
int main(void)
{
	int a;

	for (a = 'z'; a > 'a'; a--)
	{
		putchar (a);
	}

	putchar ('\n');
	return (0);
}
