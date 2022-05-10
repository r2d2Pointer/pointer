#include<iostream>
using namespace std;


void linearSearch(int*arr,int size,int key){
int count=0;
int ans=-1;
for(int i=0;i<size;++i){
   count++;
    if(arr[i]==key){
        ans=i+1;
        cout<<"steps: "<<count<<endl;
        break;
    }
}


}


int main(){

int size,key;
cout<<"Enter the value of size: ";
cin>>size;

cout<<"Enter the element in array: ";
int arr[size];
for(int i=0;i<size;++i) cin>>arr[i];

cout<<"Enter the key:";
cin>>key;

linearSearch(arr,size,key);

return 0;
}