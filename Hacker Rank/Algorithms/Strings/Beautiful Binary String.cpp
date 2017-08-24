#include <string>
#include <iostream>

using namespace std;

int main() {
    int n;
    string input;
    int count=0;
    std::cin>>n;
    std::cin>>input;
    for(int i=2;i<n;i++)
    {
        if(input[i-2]=='0' && input[i-1]=='1' &&  input[i]=='0')
        {
            count++;
            if((i+2)>n)
                break;
            else
                i+=2;
        }
    }
    printf("%d",count);
    return 0;
}
