#include <iostream>

using namespace std;

int main() {
    int p;
    cin>>p;
    while(p--)
    {
        string a,b;
        cin>>a>>b;
        int count[2][26]={0};
        for(int i=0;i<a.length();i++)
            count[0][a[i]-'a']++;
        for(int i=0;i<b.length();i++)
            count[1][b[i]-'a']++;
        int flag =0;
        for(int i=0;i<26;i++)
        {
            if(count[0][i]>0 && count[1][i]>0)
            {
                flag =1;
                cout<<"YES"<<endl;
                break;
            }
        }
        if(flag==0)
            cout<<"NO"<<endl;
    }
    return 0;
}
