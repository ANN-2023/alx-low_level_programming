#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints all sigle digit number of base 10 from 0
 * return: 0 success
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
{

	printf (" % d ", a);

}

putchar ('\n');
return (0);
}
