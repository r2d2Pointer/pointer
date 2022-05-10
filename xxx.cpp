#include<iostream>
using namespace std;
int main(){
    int n,i,j,lead;
    cout<<"no. of elements: ";
    cin>>n;
    int arr[n];
    cout<<"elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"given array is:";
    for(int i=0;i<n;i++){
      cout<< arr[i]<< " ";
    }

    for( i=0;i<n;i++){
        lead=0;
        for( j=i+1;j<n;j++){
            
           if(arr[i]>arr[j]){
               lead++;
           }
           
        }
     
         if(lead==n-i-1)
           cout<<"\nLEADERS are "<< arr[i] <<" ";
     

    }
cout<<endl;

     return 0;
    
}






/*
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
*/