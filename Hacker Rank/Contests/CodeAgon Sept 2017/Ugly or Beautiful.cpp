#include <iostream>

using namespace std;

int main() {
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        long int a[n];
        long int sum=0;
        int flag = 0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        for(int j=1;j<n;j++)
        {
            if(a[j-1]>a[j])
            {
                flag=1;
                break;
            }
        }
        (flag==1 && sum==(n*(n+1))/2)?cout<<"Beautiful"<<endl:cout<<"Ugly"<<endl;
    }
    return 0;
}
