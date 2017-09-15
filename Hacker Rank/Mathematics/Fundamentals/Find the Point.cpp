#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int n;
    scanf("%d",&n);
    int i = 0;
    for(i=0;i<n;i++)
    {
        int p1,p2,q1,q2;
        scanf("%d%d%d%d",&p1,&p2,&q1,&q2);
        printf("%d %d\n",(q1-p1)+q1,(q2-p2)+q2);
    }
    return 0;
}
