#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    int count=0;
    string input;
    cin>>input;
    for(int j=0;j<input.length();j=j+3)
    {
        if(input[j]!='S')
	count++;
        if (input[j+1]!='O')
	count++;
        if (input[j+2]!='S')
        	count++;
    }
    cout<<count<<endl;
	return 0;
}
