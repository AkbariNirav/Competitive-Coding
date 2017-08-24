#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        string input;
        int count=0;
        std::cin>>input;
        for(int i=1;i<input.length();i++)
            if(input[i-1]==input[i])
                count++;
        printf("%d\n",count);
    }
    return 0;
}
