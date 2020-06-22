/* 
c++ program to find a number raised to it's power
Approach: modular exponentiation/fast multiplication of a number with it's power
*/

#include <bits/stdc++.h>
using namespace std;

// function modExp is used to find modular exponentiation/fast multiplication of a number x to it's power y
long long modExp(long long x, long long y, long long p){
	// ans = modular exponentiation final value i.e. result
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

	// x = base, y = power, p = modulus value
	long long x, y, p;
	cin >> x >> y >> p;
	cout << modExp(x, y, p);
	return 0;
}