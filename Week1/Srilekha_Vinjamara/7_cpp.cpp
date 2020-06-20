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
	int num;
	cin >> num;
	int spaces = 2 * (num - 1) - 1;
	for(int i = 1; i <= num; i++){
		for(int j = 1; j <= i; j++)
			cout << j << " ";
		for(int k = spaces; k >= 1; k--)
			cout << "  ";
		for(int m = i; m >= 1; m--){
			if(m == num)
				continue;
			cout << m << " ";
		}
		spaces -= 2;
		cout << "\n";
	}
	return 0;
}