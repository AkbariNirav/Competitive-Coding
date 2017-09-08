#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
        {
        long int k;
        scanf("%ld",&k);
        long int rem = k/2;
        printf("%ld\n",(rem)*(k-rem));
    }
    return 0;
}
