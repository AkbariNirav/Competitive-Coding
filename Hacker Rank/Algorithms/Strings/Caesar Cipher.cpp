#include <iostream>
#include<ctype.h>
using namespace std;

int main() {
    int n,k;
    string s;
    cin>>n>>s>>k;
    k=k%26;
    for(int i=0;i<n;i++)
    {
        if(islower(s[i]))
            islower((s[i]+k))?printf("%c",(s[i]+k)):printf("%c",('a'+(s[i]+k)%('a'+26)));
        else if(isupper(s[i]))
            isupper((s[i]+k))?printf("%c",(s[i]+k)):printf("%c",('A'+(s[i]+k)%('A'+26)));
        else
            cout<<s[i];
    }
    return 0;
}
