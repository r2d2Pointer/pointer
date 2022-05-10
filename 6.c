#include <stdio.h>
unsigned long long int factorial(int n)
{
    if (n == 0)
        return 1;
    return (n * factorial(n - 1));
}

int main()
{
    int n;
     printf("enter no: ");
    scanf("%d", &n);
    printf("Factorial of %d = %llu", n, factorial(n));

    return 0;
}