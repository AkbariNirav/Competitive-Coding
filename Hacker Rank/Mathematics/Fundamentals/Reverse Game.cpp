#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int res = (k >= n / 2) ? (n - 1 - k) * 2 : (2 * k + 1);
        cout<<res<<endl;
    }
    return 0;
}
