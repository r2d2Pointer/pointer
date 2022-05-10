#include<iostream>
using namespace std;

int main(){

int size;
cout<<"Enter the size: ";
cin>>size;

int arr[size];
cout<<"Enter the element: ";
for(int i=0;i<size;++i) cin>>arr[i];

cout<<"Leaders: ";
for(int i=0;i<size;++i){
int flag=0;
    for(int j=i+1;j<size;++j){
        if(arr[i]>arr[j]){
        flag++;
        }
    }
if(flag==size-i-1) cout<<arr[i]<<" ";
}

cout<<endl;

return 0;
}