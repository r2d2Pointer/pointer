#include<iostream>
using namespace std;

void bubbleSort(int*arr,int size){

    for(int i=0;i<size-1;++i){

     for(int j=0;j<size-i-1;++j){
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
     }
    }

}


int main(){

cout<<"Enter the test case: ";
int testCase;
cin>>testCase; cout<<endl;

while(testCase--){

int size;
cout<<"Enter the value of n: ";
cin>>size;

int arr[size];

cout<<"Enter the element in array: ";
for(int i=0;i<size;++i) cin>>arr[i];

bubbleSort(arr,size);

cout<<"Sorted array: ";
    for(int i=0;i<size;++i){
        cout<<arr[i]<<" ";
    }

cout<<endl;

}
return 0;
}