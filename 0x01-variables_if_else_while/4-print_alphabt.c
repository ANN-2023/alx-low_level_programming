#include <stdio.h>
#include <unistd.h>
/**
 *main - Entry point
 *description: prints lowercase alphabets
 *return: 0 success
 */

int main(void)
{

	int ch;

	for (ch = 'a'; ch < 'z'; ch++)
{

	if (ch != 'e' && ch != 'q')
{
	
	putchar (ch);

}
else
{
putchar('\n');
return (0);
}
