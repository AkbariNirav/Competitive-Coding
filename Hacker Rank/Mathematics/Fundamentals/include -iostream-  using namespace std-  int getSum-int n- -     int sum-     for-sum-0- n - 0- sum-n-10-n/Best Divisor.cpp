#include <iostream>

using namespace std;

int getSum(int n)
{
    int sum;
    for(sum=0; n > 0; sum+=n%10,n/=10);
    return sum;
}

int main() {
    int n;
    cin>>n;
    int max = 0;
    int index = 0;
    int sum=0;
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            sum = getSum(i);
            if(sum>max)
            {
                max=sum;
                index = i;
            }
        }
    }
    if(n>1)
		cout<<index;
    else
        cout<<1;
    return 0;
}
