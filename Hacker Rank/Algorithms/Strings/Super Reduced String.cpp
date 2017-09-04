#include <iostream>
#include <stack>
 
using namespace std;
 
void showstack(stack <char> gq)
{
    stack <char> g = gq;
    stack <char> temp;
    if(!g.empty())
    {
        while (!g.empty())
        {
            temp.push(g.top());
            g.pop();
        }
        while(!temp.empty())
        {
            cout<<temp.top();
            temp.pop();
        }
    }
    else
        cout<<"Empty String";
}

int main ()
{
    string s;
    cin>>s;
    stack <char> str;
    str.push(s[0]);
    for(int i=1;i<s.length();i++)
        (!str.empty() && s[i]==str.top())?str.pop():str.push(s[i]);
    showstack(str);
 
    return 0;
}
