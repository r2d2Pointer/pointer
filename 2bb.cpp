#include <iostream>
using namespace std;


void inserteElement(int n, int *arr, int indx,int key){

    cout<<"new array with insterted value "<< key << endl;
    for (int i = n; i >= 0; i--){

    if (i != indx) arr[i] = arr[i - 1];
    else if (i == indx){
        arr[i] = key;
        break;
        }
    }
    for (int i = 0; i <= n; i++)
        cout << arr[i] << " ";

cout << endl;
}


void deleteElement(int n, int *arr, int indx){

    cout << "New Array With Deleted Index" << indx << endl;

    for (int i = indx; i < n; i++){
        arr[i] = arr[i + 1];
    }
    
    for (int i = 0; i < n; i++) 
    cout << arr[i] << " ";
    
    cout << endl;
}


int main(){

int size, index, key;
cout << "Size : ";
cin >> size;

int arr[size + 1];
cout << "Enter elements in array : ";
for (int i = 0; i < size; i++) cin >> arr[i];

cout << "Give Index and Element you want to insert : ";
cin >> index >> key;

inserteElement(size, arr, index, key);


cout << "Give Index You Want to Delete: ";
cin >> index;

deleteElement(size, arr, index);


return 0;
}