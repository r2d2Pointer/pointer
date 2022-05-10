#include <iostream>
using namespace std;
#include "basic.cpp"
#include<vector>
#include<queue>

void printTreeLevelWise(treeNode<int>* root){
   cout<<root->data<<":";
     for(int i=0;i<root->children.size();i++){ 
         cout<<root->children[i]->data<< ",";

  }
  cout<<endl;


   queue<treeNode<int>*>q;
   q.push(root);

   while(q.size()!=0){
   
   treeNode<int>* fro=q.front();
   q.pop();

  //cout<<fro->data<<",";

   
   for(int i=0;i<root->children.size();i++){
      
      cout<<fro->children[i]->data<<":"<<endl;

      
      q.push(fro->children[i]);

   }
   
   }




}



void printTree1(treeNode<int>* root){

    cout<<root->data<<endl;

    for(int i=0;i<root->children.size();i++){

        printTree1(root->children[i]);
    }
}

void printTree2(treeNode<int>* root){
    // edge case (not base case)
    if(root==NULL){
        return;
    }

    cout<<root->data<<":";
     for(int i=0;i<root->children.size();i++){ 
         cout<<root->children[i]->data<< ",";

  }
  cout<<endl;
    

    for(int i=0;i<root->children.size();i++){

        printTree2(root->children[i]);
    }
}





int main(){

     treeNode<int> *root= new treeNode<int>(1);
     treeNode<int> *node1= new treeNode<int>(2);
     treeNode<int> *node2= new treeNode<int>(3);

     root->children.push_back(node1);
     root->children.push_back(node2);

     printTree1(root);
      printTree2(root);
    printTreeLevelWise(root);                                                     


    return 0;
}