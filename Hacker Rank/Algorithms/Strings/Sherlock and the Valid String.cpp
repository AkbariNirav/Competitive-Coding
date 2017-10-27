#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int count[26] = {0};
    char c;
    while(cin>>c)
        count[c-'a']++;
    sort(count, count+26, greater<int>());
    int diff = 0;
    int d = 0;
    int index = -1;
    for(int i=1;i<26;i++)
    {
        if(count[i]!=0)
            d++;
        if(count[i]!=0 && count[0]!=count[i])
        {
            diff++;
            index = i;
        }
    }
    if(diff>1 && diff!=d)
        cout<<"NO"<<endl;
    else
    {
        if(diff==0 || (diff==1 && count[index]==1))
            cout<<"YES"<<endl;
        else
        {
            if(abs(count[index]-count[0])==1 )
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
