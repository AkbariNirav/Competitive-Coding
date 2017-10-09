#include <iostream>

using namespace std;

long long int f[1001];
void fib(int n)
{
    int i;
    f[0] = 0;
    f[1] = 1;
    for (i = 2; i <= n; i++)
        f[i] = f[i-1] + f[i-2];
}

int main ()
{
    int t;
    cin>>t;
    fib(1000);
    while(t--)
    {
        long long int n;
        cin>>n;
        int flag=0;
        for(int i=0;i<1001;i++)
        {
            if(n==f[i])
            {
                cout<<"IsFibo"<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"IsNotFibo"<<endl;
    }
    return 0;
}
