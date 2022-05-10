#include<iostream>
using namespace std;

int binarySearch(int*arr,int start,int end,int key,int count){

int mid=start+(end-start)/2;

    if(arr[mid]==key) {
        count++;
    }
        
    else if(arr[mid]>key){
        count++;
        binarySearch(arr,mid++,end,key,count);
    }
    else {
        count++;
         binarySearch(arr,start,end--,key,count);
    }

return count;


}



int main(){

int size,key;
cout<<"Enter the value of size: ";
cin>>size;

cout<<"Enter the element in array: ";
int arr[size];
for(int i=0;i<size;++i) cin>>arr[i];

int start=0,end=size-1;
cout<<"Enter the key:";
cin>>key;


int count =0;

int res=binarySearch(arr,start,end,key,count);

cout<<"steps: "<<res<<endl;


return 0;
}