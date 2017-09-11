#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main(){
    int T;
    cin >> T;
    for(int a0 = 0; a0 < T; a0++){
        int N;
        cin >> N;
        if(N==1)
             cout << 0 <<endl;
        else
            {
            long long int result = 0;
        for(int i=N-1;i>0;i--)
            {
            result = result+i;
        }
        cout << result <<endl;
        }
 
    }
    return 0;
}
