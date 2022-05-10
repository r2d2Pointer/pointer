#include<iostream>
using namespace std;

void selectionSort(int*arr,int size){

for(int i=0;i<size-1;++i){
 int min=i;
    for(int j=i+1;j<size;++j){
        if(arr[j]<arr[min]){
            min=j;
        }
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
    }
}

}


int main(){

cout<<"Enter the test case: ";
int testCase;
cin>>testCase;
cout<<endl;

while(testCase--){

int size;
cout<<"Enter the value of n: ";
cin>>size;

int arr[size];
cout<<"Enter the element in array: ";
for(int i=0;i<size;++i) cin>>arr[i];

selectionSort(arr,size);

cout<<"Sorted array: ";

for(int i=0;i<size;++i){
cout<<arr[i]<<" ";
}

cout<<endl;

}
return 0;
}