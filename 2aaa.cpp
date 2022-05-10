#include<iostream>
using namespace std;


int linearSearch(int*arr,int n,int key){

int ans=-1;
for(int i=0;i<n;++i){

    if(arr[i]==key){
        ans=i+1;
        break;
    }
}

return ans;
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

cout<<"position: "<<linearSearch(arr,n,key);

return 0;
}
