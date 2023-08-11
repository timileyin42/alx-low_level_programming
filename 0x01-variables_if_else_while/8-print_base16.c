#include <stdio.h>

/**
* main - functions to be executed
*
* Return: (0)
*/

int main(void)
{
int a;
char x;

for (a = 0; a < 10; a++)
putchar(a + '0');
for (x = 'a'; x <= 'f'; x++)
putchar(x);
putchar('\n');
return (0);
}
