#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, position, key;
    cout << "Size : ";
    cin >> n;
    int arr[n + 1];
    cout << "Array : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Position : ";
    cin >> position;
    cout << "Element you want to insert : ";
    cin >> key;
    for (int i = n + 1; i >= 0; i--)
    {
        if (i != position - 1)
        {
            arr[i] = arr[i - 1];
        }
        else
        {
            arr[i] = key;
            break;
        }
    }
    for (int i = 0; i < n + 1; i++)
        cout << arr[i] << " ";

    return 0;
}
