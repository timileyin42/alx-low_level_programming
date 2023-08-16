#include <stdio.h>

int main(void)
{
int sum = 0;
int x;

for (x = 0 ; x < 10 ; x++)
{
if (x % 3 == 0 || x % 5 == 0)
sum = sum + x;
}

printf("%d\n", sum);
}
