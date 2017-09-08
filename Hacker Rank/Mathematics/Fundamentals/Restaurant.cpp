#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    scanf("%d",&t);
    int l,b;
    int i=0;
    for(i=0;i<t;i++)
        {
        scanf("%d%d",&l,&b);
        int max=0;
        for(int j=1;j<=l;j++)
        {
            if((l%j==0)&&(b%j==0))
               max = j;
        }
        printf("%d\n",(l/max)*(b/max));
    }
    return 0;
}
