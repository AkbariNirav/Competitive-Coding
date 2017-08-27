#include <iostream>
using namespace std;
 
int main() {
	string s;
	int alpha[26]={0};
    getline(cin,s);
	for(int j=0;j<s.length();j++)
	{
		if(s[j]>=65 && s[j]<=90)
			alpha[s[j]-65]++;
		else if(s[j]>=97 && s[j]<=122)
			alpha[s[j]-97]++;
	}
	int count=0;
	for(int i=0;i<26;i++)
	{
		if(alpha[i]>0)
			count++;
	}
	count==26?cout<<"pangram":cout<<"not pangram";
	return 0;
}
