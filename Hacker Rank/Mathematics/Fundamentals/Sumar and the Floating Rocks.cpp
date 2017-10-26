#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin>>t;
    int x1,x2,y1,y2;
    while(t--)
    {
        cin>>x1>>y1>>x2>>y2;
        cout<<__gcd(abs(x2-x1),abs(y2-y1))-1<<endl;
    }
    return 0;
}
