#include <bits/stdc++.h>
using namespace std;

// function to find longest even length substring with left sum equal to right sum in the substring
void maxLength(string str){
	int n = str.length(), ans = 0;
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j += 2){
			int len = j - i + 1, leftTotal = 0, rightTotal = 0;
			for(int k = 0; k < len/2; k++){
				leftTotal += (str[i + k] - '0');
				rightTotal += (str[i + k + len/2] - '0');
			}
			if(leftTotal == rightTotal && len > ans)
				ans = len;
		}
	}
	cout << ans;
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	cin >> str;
	maxLength(str);
	return 0;
}