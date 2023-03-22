#include <bits/stdc++.h>
using namespace std;

string isPlindrome(string s){
    for(int i=0; i< s.length()/2; i++){
        if( s[i] != s[s.length() - i - 1]){
            return "No";

        }

    }
    return "YES";
}







// Driver Code
int main()
{
    string S = "ABCDCBA";
    cout << isPalindrome(S);
 
    return 0;
}