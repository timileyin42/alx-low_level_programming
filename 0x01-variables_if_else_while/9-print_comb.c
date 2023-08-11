#include <stdio.h>

/**
* main - functions to be execute
*
* Return: (0)
*/

int main(void)
{
int a;
for (a = 0; a < 10; a++)
{
if (a == 9)
putchar(a + '0');
else
{
putchar(a + '0');
putchar(',');
putchar(' ');
}

}
return (0);
}
