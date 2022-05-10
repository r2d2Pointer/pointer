#include<iostream>
using namespace std;

void binarySearch(int *arr, int key, int start, int end){

static int count = 0;
while (start <= end){
count++;
int mid = (start + end) / 2;

    if (arr[mid] == key)
        break;
    
    else if (arr[mid] < key)
    start = mid + 1;
    
    else if (arr[mid] > key)
    end = mid - 1;

if (start > end)
cout << key << " is Not Found"<< endl;

}

cout << "Total Numbers of Comparisions: " << count << endl;

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


//int count =0;

binarySearch(arr,key,start,end);

//cout<<"steps: "<<res<<endl;


return 0;
}