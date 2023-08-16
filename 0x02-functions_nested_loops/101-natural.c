#include <stdio.h>
/*
 * File: 101-natural.c
 * Auth: vincent kip
 */

/**
 * main - Lists all the natural numbers below 1024 (excluded)
 *        that are multiples of 3 or 5.
 *
 * Return: Always 0.
 */
int main(void)
{
int x, y = 0;

while (x < 1024)
{
if ((x % 3 == 0) || (x % 5) == 0))
{
y += x;
}
printf("%d\n", y);
return (0);
}

