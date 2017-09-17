#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        unsigned long long int n;
        cin>>n;
        unsigned long long int sum = 0;
        sum = ((n%1000000007)*(n%1000000007))%1000000007;
        cout<<sum<<endl;
    }
    return 0;
}
