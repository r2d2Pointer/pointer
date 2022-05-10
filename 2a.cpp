#include<iostream>
using namespace std;

int main(){

int n,key;
cout<<"Enter the value of n: ";
cin>>n;

int arr[n];
cout<<"Enter the element in array: ";
for(int i=0;i<n;++i) cin>>arr[i];

cout<<"Enter the key: ";
cin>>key;

cout<<"position: ";

for(int i=0;i<n;++i){
    if(arr[i]==key){
        cout<<i+1<<endl;
        break;
    }
}
    return 0;
}