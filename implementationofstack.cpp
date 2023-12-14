#include<iostream>
#include<stack>
using namespace std;
// implementation using array
/*class Stack{
   public:
   int*arr;
   int top;
   int size;

   Stack(int size){
    this->size=size;
    arr= new int [size];
     top=-1;
   }
   void push(int element){
      if(size-top>1){
        top++;
        arr[top]=element;
      }
      else{
        cout << "stack over flow" << endl;
      }
   }
   void pop(){
       if(top >= 0){
        top--;
       }
       else{
        cout << "stack under flow" << endl;
       }
   }
   int peek(){
       if(top >= 0){
        return arr[top];
       }  
       else{
        cout << "stack is empty" << endl;
        return -1;
       }
   }
   bool isempty(){
          if(top == -1){
            return true;
          }
          else{
            return false;
          }
   }
};
*/

// implementation using linkedlist;

class Node{
   public:
   int data;
   Node* next;
    Node(int d){
    this -> data = d;
    this -> next = NULL; 
    }
};
class Stack{
  Node*top;
    public:
    Stack(){ 
      top = NULL;
      }

   void push(int d){
         Node*temp=new Node(d);
         if(!temp){
          cout << "stackoverflow" << endl;
          return;
         }
         temp->data=d;
         temp->next=top;
         top=temp;
     }
     void pop(){
      Node*temp;
       if(top == NULL){
        cout << "stack under flow" << endl;
        return;
       }
       else{
          temp=top;
          top=top->next;

          free(temp);
       }
     }
     int peek(){
         if(top != NULL){
          cout <<  top->data << endl;
         }
         else{
             cout << "empty" << endl;
         }

     }
     bool isempty(){
          if(top == NULL){
            return true;
          }
          else{
            return false;
          }
     }
     void print(){
     Node*temp;
     if(top == NULL){
      cout << "stack underflow " << endl;
      return;
     }
     else{
      temp=top;
  while(temp!=NULL){
    cout << temp->data <<" ";
    temp = temp -> next;
  }
  cout << endl;
     }
}
};
  
int main(){
     Stack st;

     st.push(11);
     st.push(12);
     st.push(23);

     st.print(); 

     st.pop();

    st.print();

     if(st.isempty()){
        cout << "stack is empty" << endl;
     }
     else{
        cout << "stack is not empty"<< endl;
     }
}