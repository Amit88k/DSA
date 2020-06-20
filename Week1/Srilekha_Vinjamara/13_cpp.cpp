#include <bits/stdc++.h>
using namespace std;

long long modExp(long long x, long long y, long long p){
	long long ans = 1;
	x = x % p;
	if(x == 0)
		return 0;
	while(y > 0){
		if(y & 1)
			ans = (ans*x) % p;
		x = (x*x) % p;
		y = y >> 1;
	}
	return ans;
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long x, y, p;
	cin >> x >> y >> p;
	cout << modExp(x, y, p);
	return 0;
}