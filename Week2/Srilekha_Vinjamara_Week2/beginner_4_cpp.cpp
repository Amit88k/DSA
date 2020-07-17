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
	string str;
	getline(cin, str);

	// helps to get frequencies per character to aid duplicate removal
	int freq[256] = {0};
	for(int i = 0; i < str.length(); i++){
		freq[int(str[i])]++;
		if(freq[int(str[i])] > 1)
			continue;
		else
			cout << str[i];
	}
	return 0;
}