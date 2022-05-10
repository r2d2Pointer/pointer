#include<iostream>
using namespace std;

int linearSearch(int*arr,int n,int key){

    if(n==0) return-1;
    else if(arr[n]==key) return n+1;
    else return linearSearch(arr,n-1,key);

}



int main(){

int n,key;
cout<<"Enter the value of n: ";
cin>>n;

int arr[n];
cout<<"Enter the element in array: ";
for(int i=0;i<n;++i) cin>>arr[i];

cout<<"Enter the key: ";
cin>>key;

cout<<"position: "<< linearSearch(arr,n,key);

return 0;
}