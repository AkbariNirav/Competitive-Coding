#include <iostream>

using namespace std;

int main() {
    int q;;
    cin>>q;
    while(q--)
    {
        string s;
        int count = 0;
        cin>>s;
        int alpha[26]={2,0,1,0,1,0,0,1,0,0,2,0,0,1,0,0,0,2,0,0,0,0,0,0,0,0};
        string ini ="hackerrank";
        int ind=0;
        int index[10]={0};
        for(int i=0;i<s.length();i++)
        {
            (s[i]>='A'&&s[i]<='Z')?alpha[s[i]-'A']-- :  alpha[s[i]-'a']--;
            if(s[i]==ini[ind])
            {
                index[ind]=i;
                ind++;
            }
        }
           
        for(int j=0;j<26;j++)
            alpha[j]<=0?count++:count=count;
        for(int i=0;i<9;i++)
            index[i]<index[i+1]?count++:count=count;
        count==35?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
    return 0;
}
