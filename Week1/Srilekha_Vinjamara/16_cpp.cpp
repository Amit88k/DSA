#include <iostream>
using namespace std;

int main() {
	//code
	long long t;
	cin >> t;
	while(t--){
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