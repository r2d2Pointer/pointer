#include<iostream>
using namespace std;

int main(){

int num;
cout<<"enter the number: ";
cin>>num;
int q=num,r;

cout<<"reverse: ";

while(q){
r=q%10;
cout<<r<<"";
q=q/10;

}



return 0;
}