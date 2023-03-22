#include <bits/stdc++.h>
#include <stack>
#include <string.h>

bool findRedundantBrackets(string s)
{

    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            st.push(ch);
        }
        else
        {
            // if ch lowercase avoid or if ) and inbetween operator then valid
            if (ch == ')')
            {
                bool isRedundant = true;

                while (st.top() != '(')
                {
                    char top = st.top();
                    if (top == '(' || ch == '+' || top == '-' || top == '*' || top == '/')
                    {
                        isRedundant = false;
                    }
                    st.pop();
                }
                if (isRedundant == true)
                {
                    return true;
                }
                st.pop();
            }
        }
    }
    return false;
}
int main()
{

    string red = "(a+b)";

    bool redundant = findRedundantBrackets(red);

    if (redundant)
    {
        cout << " expression valid" << endl;
    }
    else
    {
        cout << "not valid" << endl;
    }

    return 0;
}