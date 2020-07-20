#include <iostream>
using namespace std;
//Logic - Traverse the string from right to left and print the final output
int main() {
	int t,i,j;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    string s;
	    cin>>s;
	    for(j=s.length()-1;j>=0;j--)
	    cout<<s[j];
	    cout<<endl;
	}
	return 0;
}
