#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int i=0;
    long long int r,c;
    scanf("%lld %lld",&r,&c);
    if(r%2==0)
    {
        long long int rank=0;
        rank = ((r/2-1)*5+(c-1));
        printf("%lld",2*rank+1);
    }
    else
    {
        long long int rank=0;
        rank = ((r/2)*5+(c-1));
        printf("%lld",2*rank);
    }  
    return 0;
}
