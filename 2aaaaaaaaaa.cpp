#include<iostream>
using namespace std;

int missing(int *arr,int n){
  int a=0,b=0;
  for(int i=0;i<n;++i){
      a=a^arr[i];
  }
 for(int i=1;i<=n+1;++i){
     b=b^i;
 }
 return a^b;
}

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int arr[n-1];
    cout<<"Enter the element of array : ";
    for(int i=0;i<n-1;++i){
        cin>>arr[i];
    }
    cout<<"Missing NO : "<<missing(arr,n-1)<<endl;
    return 0;
}