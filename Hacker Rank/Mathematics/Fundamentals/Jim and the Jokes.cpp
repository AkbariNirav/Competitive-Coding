#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin>>n;
    int dec[n]={0};
    int count = 0;
    while(n--)
    {
        int m,d;
        cin>>m>>d;
        int tmp1 = (d%10>=m)?-1:(d%10);
        int tmp2 = (d/10>=m)?-1:((d/10)*m);
        dec[count] = (tmp1==-1 || tmp2 == -1)?0:tmp1+tmp2;
        count++;
    }
    sort(dec,dec+count);
    long int c[38]={0};
    for(int i=0;i<count;i++)
        if(dec[i]>0)
            c[dec[i]]++;
    unsigned long int sum=0;
    for(int i=0;i<38;i++)
    {
        c[i] = (c[i]*(c[i]-1))/2;
        sum+=c[i];
    }
    cout<<sum<<endl;
    return 0;
}
