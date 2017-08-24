#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    int count =1;
    std::cin>>input;
    for(int i=0;i<input.length();i++)
        if(input[i]>=65 && input[i]<=90)
            count++;
    printf("%d",count);
    return 0;
}
