#include<bits/stdc++.h>
using namespace std;
int prec(char ch)
{
    if(ch=='^')
        return 3;
    else if(ch=='+' || ch=='-')
        return 1;
    else if(ch=='*' || ch=='/')
        return 2;
    else
        return -1;
}
int main()
{
    stack <char> st;
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
        {
            cout<<s[i];
        }
        else if(s[i]==')')
        {
            while(!st.empty() && st.top()!='(')
            {
                cout<<st.top();
                st.pop();
            }
            if(st.top()=='(')
                st.pop();
        }
        else
        {
            if(st.empty() || s[i]=='(')
            {
                st.push(s[i]);
            }
            else{
            while(!st.empty() && prec(st.top())>prec(s[i]))
            {
                cout<<st.top();
                st.pop();
            }
            st.push(s[i]);
            }
        }
    }
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }

}