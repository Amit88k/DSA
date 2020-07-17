#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	// str = user input string
	string str;
	cin >> str;
	str = str + ".";

	// str1 = final output string consisting of word order reversed in the sentence given
	string str1 = "", str2 = ""; 
	
	for(int i = 0; i < str.length(); i++){
		if(str[i] == '.'){
			str1 = str2 + '.' + str1;
			str2 = "";
		}
		else{
			str2 += str[i];
		}
	}
	str1 = str1.substr(0, str1.size() - 1);
	cout << str1;
	return 0;
}