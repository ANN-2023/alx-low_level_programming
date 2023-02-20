#include <stdio.h>
#include <unistd.h>
/**
 * Main - Entry point
 * Description: prints alphabet in lowercase then uppercase
 * return: 0 success
 */

int main(void)
{
	int ch;

		for (ch = 'a'; ch < 'z'; ch++)
{

	putchar (ch);
}

for (ch = 'A'; ch < 'Z'; ch++)
{

	putchar (ch);
}
putchar ('\n');
return (0);
}
