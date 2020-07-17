/* 
c++ program to find if a number is a power of 2
Approach: using bitwise operations gives smallest worst case time complexity, power of 2 iff the bitwise and(&) of input number num and (num - 1) equal 0. In all other cases, the input number num isn't a power of 2 
*/

#include <iostream>
using namespace std;

int main() {
	//code
	long long t;
	cin >> t;
	while(t--){
	    // num = user input number
	    long long num;

	    cin >> num;
	    if(num == 0)
	        cout << "NO\n";
	    else if((num & (num - 1)) == 0)
	        cout << "YES\n";
	    else
	        cout << "NO\n";
	    else if((num & (num - 1)) == 0)
	return 0;
}