#include <queue>
#include <iostream>
#include <sstream>
using namespace std;

int main() {
    int n = 100000;
    unsigned long long int b[n] = {0};
    queue<string> q;
    q.push("9");
    int count=0;
    while (n--)
    {
        string s1 = q.front();
        stringstream bin(s1);
        bin >> b[count];
        q.pop();
        string s2 = s1; 
        q.push(s1.append("0"));
        q.push(s2.append("9"));
        count++;
    }
    int t;
    cin>>t;
    while(t--)
    {
        int num;
        cin>>num;
        for(int i=0;i<100000;i++)
        {
            if(b[i]%num==0)
            {
                cout<<b[i]<<endl;
                break;
            }
        }
    }
    return 0;
}
