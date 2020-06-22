/* 
c++ program to find GCD of two numbers
Approach: find maximum of the given 2 numbers and find a number in the range 1 to this maximum which will be the GCD
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

	// num1 = user input1, num2 = user input2
	int num1, num2;
	cin >> num1 >> num2;
	int maxi = (num1 > num2) ? num1 : num2;
	for(int i = maxi; i >= 1; i--){
		if(num1 % i == 0 && num2 % i == 0){
			cout << "GCD of " << num1 << " & " << num2 << " is: " << i;
			break;
		}
	}
	return 0;
}