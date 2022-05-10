#include <iostream>
using namespace std;
#include "stack_Implementation_LL.cpp"

int main(){
      
    stack<int>s;

    s.push(2);
    s.push(4);
    s.push(6);
    s.pop();

    cout<<s.top()<<endl;
    cout<<s.getSize()<<endl;
    cout<<s.isEmpty()<<endl;





    return 0;
}