#include<iostream>
using namespace std;

class node{

public:
int data;
node* next;

node(int data){
this->data=data;
next=NULL;

}
};

void print_ll(node* head){

node* temp=head;
while(temp!=NULL){
cout<<temp->data<<" ";
temp=temp->next;


}

}


node* insert_ll_end(node* head){
    int data;
    cin>>data;
    node* newnode=new node(data);
    node*temp=head;

    while(temp!=NULL){
        temp=temp->next;
        
    }
    temp->next=newnode;


 
  return temp;

}


node* insert_ll_mid(node* head){
    int data,index;
    cin>>data>>index;
    node* newnode=new node(data);
    node*temp=head;

    while(index){
        temp=temp->next;
        index--;
    }

    node* a=temp->next;
    temp->next=newnode;
    newnode->next=a;



    return head;

}


node* insert_ll_front(node* head){

 int data;
    cin>>data;
    node* newnode=new node(data);
    node*temp=head;
  
  newnode->next=temp;
  head=newnode;

  return head;


}


node* delete_ll_end(node* head){

node* temp=head;


while(temp!=NULL){
   temp= temp->next;


}

delete temp;
return head;

}

node* delete_ll_front(node* head){
  node* temp=head;
  head=head->next;
  delete temp;


    return head;
}


node* delete_ll_mid(node* head){

    node* temp=head;

    int index;
    cin>>index;
    while(index){
        temp=temp->next;

    }
    node*a=temp->next;

    temp->next=temp->next->next;


    delete a;


    return head;
}


int length_ll(node* head){

    node*temp=head;
    int count=0;

    while(temp!=NULL){
        count++;
        temp=temp->next;
    }

    return count;

}

node* reverse_ll(node* head){

node* temp=head;
node* temp2;
if(temp2->next!=NULL)
 temp2=temp->next;

node* rev=reverse_ll( temp2);

rev->next=temp;
temp->next=NULL;

return temp;

}


int count_no_ll(node* head){

int value;
cin>>value;

int count=0;

node* temp=head;
while(temp!=NULL){

    if(temp->data=value){
        count++;
    }

    temp=temp->next;
}

return count;
    
}


bool linear_search_ll(node* head){

    int value;
    cin>>value;

    node* temp=head;
    while(temp!=NULL){

    if(temp->data=value){
        return true;
    }

    temp=temp->next;
}

return false;

}



















































































int main(){

node* a=new node(1);
node*head=a;
print_ll(head);

}




































