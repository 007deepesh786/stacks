#include<iostream>
#include<stack>
using namespace std;

int main(){
    // creation of stack
    stack<int>s;

    // push operation
    s.push(2);
    s.push(11);
    s.push(4);

    // pop operation
    s.pop();

    cout << "print the top element in the stack"<<s.top()<<endl;

    if(s.empty()){
        cout << "empty" << endl;
    }
    else{
         cout << "not empty" << endl;
    }
    cout << s.size() << endl;
}

//   IMPLEMENTATION OF STACKS.

