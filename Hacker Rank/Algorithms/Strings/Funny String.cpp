#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        string r = s;
        reverse(r.begin(),r.end());
        int count = 0;
        for(int j=1;j<s.length();j++)
            if(abs(s[j]-s[j-1])==abs(r[j]-r[j-1]))
                count++;
        count == (s.length()-1) ? cout<<"Funny"<<endl : cout<<"Not Funny"<<endl;
    }
    return 0;
}
