#include <iostream>

using namespace std;

int main() {
    int count[26]={0};
    string s;
    cin>>s;
    int k;
    cin>>k;
    for(int i=0;i<s.length();i++)
        count[s[i]-'a']++;
    for(int i=0;i<s.length();i++)
    {
        if(count[s[i]-'a']>=k)
        {
                printf("%c",s[i]);
        }
    }
    return 0;
}
