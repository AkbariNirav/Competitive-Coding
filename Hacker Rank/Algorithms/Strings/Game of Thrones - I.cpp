#include <iostream>
#include <string>
using namespace std;
 
int main() {
	string s;
	long int alpha[26]={0};
	long int c_odd=0,c_even=0;
	cin>>s;
	for(int i=0;i<s.length();i++)
		alpha[s[i]-'a']++;
	for(int i=0;i<26;i++)
		alpha[i]%2==0?c_even++:c_odd++;
	(c_odd==1||c_odd==0)?cout<<"YES":cout<<"NO";
	return 0;
}
