// through recurrsion

#include<bits/stdc++.h>
using namespace std;


void sortedInsert(stack<int> &stack, int num){
    // base case
    if(stack.empty() || (!stack.empty() && stack.top() < num)){
        stack.push(num);
        return ;

    }
    int n = stack.top();
    stack.pop();


    // recurrsive call
    sortedInsert(stack, num);

    stack.push(n);


}
void sortStack(stack<int> &stack){
    // base case
    if(stack.empty()){
        return;
    }

    int num = stack.top();
    stack.pop();

    // recurrsive call
    sortStack(stack);

    // inserted element in sorted way
    sortedInsert(stack, num);
    
}
int main(){

    stack<int> s;
    s.push(10);
    s.push(5);
    s.push(20);
    s.push(15);
    s.push(2);

    // cout<< s.top() << endl;

   sortStack(s);

    cout<< s.top() << endl;



   
    return 0;

}