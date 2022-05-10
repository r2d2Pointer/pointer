#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Give a number : ");
    scanf("%d", &n);
    int *ptr;

    ptr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; ++i)
    {
        ptr[i] = i + 1;
    }
    printf("Printing all even numbers upto %d\n", n);
    for (int i = 1; i < n; i = i + 2)
    {
        printf("%d ", ptr[i]);
    }

    return 0;
}