#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int count[2][26]={0};
        string s;
        cin>>s;
        if(s.length()%2!=0)
            cout<<-1<<endl;
        else
        {
            for(int i=0;i<s.length()/2;i++)
                count[0][s[i]-'a']++;
            for(int i=s.length()/2;i<s.length();i++)
                count[1][s[i]-'a']++;
            int c=0;
            for(int i=0;i<26;i++)
                c+=abs(count[0][i]-count[1][i]);
            cout<<c/2<<endl;
        }
    }
    return 0;
}
