#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Description:checks on the last digit of the assigned variable
 * Return: 0 success
 */

int main(void)
{
	int n;
	int m;

	srand(time(0));
	rand (0) - RAND_MAX / 2;
	m = n % 10;
	if(m > 5)
{

printf("last digit of % d is % d and is greater than 5\n", n, m);
}

else if (m < 6 && m !=0)

{

printf("last digit of % d is % d and is less than 6 and not 0\n", n, m);
}

else

{

printf("last digit of % d is % d and is 0\n", n, m);
}
return (0);
}
