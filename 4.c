#include <stdio.h>

void bubbleSort(int n, int *arr)
{
    int temp, flag;
    for (int i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (int j = 0; j < (n - i - 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
            break;
    }
}

int main()
{
    printf("Size : ");
    int n;
    scanf("%d", &n);
    int arr[n];
    printf("Array : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    bubbleSort(n, arr);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}