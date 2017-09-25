#include <iostream>
#include <math.h>
using namespace std;

int main() {
    long int n,m;
    cin>>n>>m;
    long long int sum = 0;
    while(m--)
    {
        long int a,b,k;
        cin>>a>>b>>k;
        sum+=(b-a+1)*k;
    }
    sum = sum/n;
    cout<<sum;
    return 0;
}
