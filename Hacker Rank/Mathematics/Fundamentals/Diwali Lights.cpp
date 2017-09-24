#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int val = 1;
        for (int i = 0; i < n; i++) 
        {
            val *= 2;
            val = val % 100000;
        }
        cout<<val-1<<endl;
    }
    return 0;
}
