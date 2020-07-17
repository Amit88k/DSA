/* 
c++ program to print traingle pattern
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

	// num = user input
	int num;
	cin >> num;
	int a = 0, b = 1, c;
	for(int i = 1; i <= num; i++){
		for(int j = 1; j <= i; j++){
			if(i == 1 && j == 1)
				cout << a << " ";
			else if(i == 2 && j == 1)
				cout << b << " ";
			else{
				c = a + b;
				cout << c << " ";
				a = b; 
				b = c;
			}
		}
		cout << "\n";
	}
	return 0;
}