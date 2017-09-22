#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long int routes  = 1;
        int n;
        cin>>n;
        int temp;
        while(--n)
        {
            cin>>temp;
            routes=routes*temp%1234567;
        }
        cout<<routes%1234567<<endl;
    }
    return 0;
}
