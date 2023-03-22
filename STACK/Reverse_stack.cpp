#include<iostream>
#include<stack>

using namespace std;

int main(){

    string str = "pratik";

    stack<char> s;

    for(int i =0;i<str.length();i++){
        char ch = str[i];
        s.push(ch);
    }

    string ans = "";

    while(!s.empty()){
        char sh = s.top();
        ans.push_back(sh);

        s.pop();
    }

    cout<< ans << endl;

    return 0;
}