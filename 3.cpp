#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, largest = INT_MIN, secondLargest = INT_MIN;
     printf("enter no: ");
    cin >> n;
    int arr[n];
    printf("enter %d no: ",n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
        if (arr[i] > largest)
            largest = arr[i];
    for (int i = 0; i < n; i++)
        if (arr[i] > secondLargest && arr[i] < largest)
            secondLargest = arr[i];
    cout << "Largest Number = " << largest << endl;
    cout << "Second Largest Number = " << secondLargest << endl;

    return 0;
}