#include <bits/stdc++.h>
using namespace std;

// function to find all possible permutations of an input string, using backtracking
void permute(string a, int l, int r){
	if(l == r)
		cout << a << " ";
	else{
		for(int i = l; i <= r; i++){
			swap(a[l], a[i]);      // combinations
			permute(a, l + 1, r);
			swap(a[l], a[i]);      // backtracking
		}
	}
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
	permute(str, 0, str.length() - 1);
	return 0;
}