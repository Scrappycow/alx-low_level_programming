#include <stdio.h>
/**
 * main - function that prints a[2] = 98, followed by a new line.
 * Rules:
 * - the variables a and p are forbidden
 * - only one statement is allowed
 * - you are not allowed to use ,
 *   - you are not allowed to code anything else than this line of code
 * Return: Always (0)
 */
int main(void)
{
        int n;
        int a[5];
        int *p;

        a[2] = 1024;
        p = &n;
        *(p + 5) = 98;
        printf("a[2] = %d\n", a[2]);
        return (0);
}
