#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
    int alphaa[26]={0};
    int alphab[26]={0};
    string a,b;
    cin>>a;
    cin>>b;
    for(int i=0;i<a.length();i++)
        alphaa[a[i]-'a']++;
    for(int j=0;j<b.length();j++)
        alphab[b[j]-'a']++;
    int count=0;
    for(int k=0;k<26;k++)
        if(alphaa[k]!=alphab[k])
            count=count+abs(alphaa[k]-alphab[k]);
    cout<<count<<endl;
    return 0;
}
