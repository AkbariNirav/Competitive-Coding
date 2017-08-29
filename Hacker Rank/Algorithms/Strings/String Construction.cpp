#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int count[26]={0};
        string s;
        cin>>s;
        int cost = 0;
        for(int j=0;j<s.length();j++)
        {
            count[s[j]-'a']++;
        }
        for(int k=0;k<26;k++)
            if(count[k]!=0)
                cost++;
        cout<<cost<<endl;
    }
    return 0;
}
