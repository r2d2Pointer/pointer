#include <iostream>
using namespace std;

int main()
{
    int n;
    float avg = 0;
    printf("enter no: ");
    cin >> n;

    int arr[n];
      printf("enter %d no: ",n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        avg += arr[i];
    }
    cout << "Average = " << avg / n << endl;

    return 0;
}