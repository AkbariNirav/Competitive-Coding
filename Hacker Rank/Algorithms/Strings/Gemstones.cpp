#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    int config[t][26]={0};
    int count = 0;
    while(t--)
    {
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++)
            config[count][s[i]-'a']++;
        count++;
    }
    int gemstone=0;
    for(int i=0;i<26;i++)
    {
        int temp=0;
        for(int j=0;j<count;j++)
        {
            if(config[j][i]>=1)
                temp++;
            if(temp==count)
                gemstone++;
        }
    }        
    cout<<gemstone;
    return 0;
}
