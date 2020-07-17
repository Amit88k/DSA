/* 
c++ program to print square of a number 
*/

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
	
	// num is a variable used to take input 
	float num; 
	cin >> num;
	cout << num*num;
	return 0;
}