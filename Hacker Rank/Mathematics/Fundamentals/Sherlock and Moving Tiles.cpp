#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
    long long int l,s1,s2;
    int q;
    cin>>l>>s1>>s2>>q;
    while(q--)
    {
        long long int qi;
        cin>>qi;
        long double time = (sqrt(2)*l-sqrt(2*qi))/abs(s1-s2);
        printf("%llf\n",time);
    }
    return 0;
}
