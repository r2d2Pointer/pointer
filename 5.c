#include <stdio.h>

int sum(int n)
{
    if (n == 0)
        return 0;
    return (n + sum(n - 1));
}

int main()
{
    int n;
     printf("enter no: ");
    scanf("%d", &n);
    printf("Sum of first %d natural numbers = %d\n", n, sum(n));

    return 0;
}