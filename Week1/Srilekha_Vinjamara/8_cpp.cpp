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
	
	for(int i = 1; i <= num; i++){
		for(int j = 1; j <= num + 1 - i; j++)
			cout << j << " ";
		int stars = 2 * (i - 2) + 1;
		for(int k = 1; k <= stars; k++)
			cout << "* ";
		cout << "\n";
	}
	return 0;
}