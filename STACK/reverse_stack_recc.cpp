// through recurrsion

#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &s, int element){
    // base case
    if(s.empty()){
        s.push(element);
        return ;
    }

    int num = s.top();
    s.pop();

    insertAtBottom(s, element);

    s.push(num);

}
void reverseStack(stack<int> &stack){
    // base case
    if(stack.empty()){
        return;
    }
    
    int num = stack.top();
    stack.pop();

    reverseStack(stack);

    insertAtBottom(stack , num);

}
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout<< s.top() << endl;

    reverseStack(s);

    cout<< s.top() << endl;




    return 0;

}