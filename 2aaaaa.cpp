#include<iostream>
using namespace std;


int binarySearch(int*arr,int start,int end,int key){

int mid=start+(end-start)/2;

    if(arr[mid]==key) return mid;
    else if(arr[mid]>key){
        binarySearch(arr,mid++,end,key);
    }
    else binarySearch(arr,start,end--,key);

return-1;
}


int main(){

int n,key;
cout<<"Enter the value of n: ";
cin>>n;

int arr[n];
cout<<"Enter the element in array: ";
for(int i=0;i<n;++i)
cin>>arr[i];

int start=0,end=n-1;
cout<<"Enter the key: ";
cin>>key;

cout<<"Index: "<<binarySearch(arr,start,end,key);

return 0;
}