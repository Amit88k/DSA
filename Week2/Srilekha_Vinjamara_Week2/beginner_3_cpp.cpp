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
	string str1, str2;
	cin >> str1 >> str2;
	if(str1.length() != str2.length())
		cout << "No\n";
	else{
		// freq1 = frequencies of all chars in str1
		// freq2 = frequencies of all chars in str2
		// freq1 & freq2 are used to find anagram matches

		int freq1[26] = {0}, freq2[26] = {0};
		int flag = 0;
		for(int i = 0; i < str1.length(); i++){
			freq1[str1[i] - 'a']++;
			freq2[str2[i] - 'a']++;
		}
		for(int i = 0; i < 26; i++){
			if(freq1[i] != freq2[i]){
				flag = 1;
				break;
			}
		}
		if(flag == 1)
			cout << "No\n";
		else
			cout << "Yes\n";
	}
	return 0;
}