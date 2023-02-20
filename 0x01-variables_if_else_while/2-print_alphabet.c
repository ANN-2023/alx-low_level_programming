#include <stdio.h>
#include <unistd.h>
/**
 * Main - Entry point
 * Description: prints the alphabetic in lowercase\n
 * return: 0 success
 */

int main(void)
{

	int ch;

	for (ch = 'a'; ch < 'z'; ch++)
{
	putchar (ch);
}

putchar ('\n');
return (0);
}
