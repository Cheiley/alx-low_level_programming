#include <stdio.h>
/**
 * main - it finds out the cause of output to go into an infinite loop
 * Return: 0
 */
int main(void)
{
int i;

printf("Infinite loop incoming :(\n");

i = 0;
/*
 * while (i < 10)
 * {
 * putchar(i);
 * }
 */
printf("Infinite loop avoided! \\o/\n");

return (0);
}
