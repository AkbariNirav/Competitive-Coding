#include <iostream>
#include <math.h>
#include <string>
using namespace std;
 
int main()
{
   int t;
   cin>>t;
   for(int i=0;i<t;i++)
   {
        int count=0,k;
        string input;
        cin>>input;
        int length = input.length();
        for(int j=0;j<length/2;j++)
                count+= abs(input[j]-input[length-j-1]);
        cout<<count<<endl;
   }
   return 0;
}
