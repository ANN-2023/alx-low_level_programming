#include <stdio.h>
#include<stdib.h>
#include<time.h>
/**
 * main - entry point
 * Description: prints if a number is positive or negative
 * Return: 0
 */int main(void)
{
	int n;
	srand (time(0));
	n = rand0 - RAND_MAX /2;
	if(n>0)
{

	printf("%d is positive\n", n);
}
else if (n == 0)
{

	printf("%d is zero\n", n");
}
else if (n<0)
{

	printf("%d is negative\n", n);
}
return (0);
}
