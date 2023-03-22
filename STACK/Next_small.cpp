#include<iostream>
#include<stack>
#include<vector>

using namespace std;


vector<int> nextSmallestElement(vector<int> &arr, int n){
    stack<int> s;
    s.push(-1);

    vector<int> ans;

    for(int i=n-1 ; i>=0;i--){
        int curr = arr[i];
        while(s.top() >= curr){
            s.pop();
        }

        // ans is stack top element
        ans[i] = s.top();
        s.push(curr);

    }
    return ans;
}
int main(){
   
   vector<int> v1;
   v1.push_back(2);
   v1.push_back(1);
   v1.push_back(4);
   v1.push_back(3);

   int n = v1.size();

   nextSmallestElement(v1, n);

//    cout<< v1.top() << endl;







    return 0;
}