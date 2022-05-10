#include <iostream>
#include "library.cpp"
using namespace std;

int main(){

int size;
cout << "Size : ";
cin >> size;

int arr[size];

cout << "Enter elements in array : ";
for (int i = 0; i < size; i++)
cin >> arr[i];

bubbleSort(arr, size);

cout << "Sorted Array : ";

for (int i = 0; i < size; i++)
cout << arr[i] << " ";

return 0;
}