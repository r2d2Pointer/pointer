#include <iostream>
using namespace std;

// without using template

//    class Node {
//       public:
//        int data;
//        Node *next;

//      Node(int data){
//       this->data=data;
//       next = NULL;
//      }
//     };

//   class stack {
//       Node *head;
//       int size;

//       public:
//       stack {

//       }

//       int getSize(){

//       }

//       bool isEmpty(){

//       }

//       void push(int element){

//       }

//       int pop(){

//       }

//       int top(){

//       }

//   };

// using template

template <typename T>
class Node
{
 public:
    T data;
    Node<T> *next;

    Node(T data)
    {
        this->data = data;
        next = NULL;
    }
};

template <typename T>

class stack
{
    Node<T> *head;
    int size; // no of element present in stack

 public:
    // constructor
    stack()
    {
        head = NULL;
        size = 0;
    }
    // size functoin
    int getSize()
    {
        return size;
    }
    // is_empty function
    bool isEmpty()
    {
        return (size == 0);
    }
    // element insert
    void push(T element)
    {
        Node<T> *newNode = new Node<T>(element);
        newNode->next = head;
        head = newNode;
        size++;
    }
    // element pop
    T pop()
    {
        if (isEmpty())
        {
            return 0;
        }

        T ans = head->data;

        Node<T> *temp = head;
        head = head->next;
        delete temp;

        size--;

        return ans;
    }
    // top element value
    T top()
    {
        if (isEmpty())
        {
            return 0;
        }

        return head->data;
    }
};




