/* 
c++ program to find a prime number
Approach: if number is divisible by any number other than 1 and itself, flag and mark as prime (till range as square root of input)
*/

#include <iostream>
using namespace std;

int main() {
	//code

	// t = number of test cases
	int t;
	cin >> t;
	while(t--){
	    long int num, flag = 0;
    	cin >> num;
    	for(int i = 2; (i*i) <= num; i++){
    	    if(num % i == 0){
    	        flag = 1;
    	        break;
    	    }
    	}
    	if(flag == 0)
    	    cout << "Yes\n";
    	else
    	    cout << "No\n";
	}
	return 0;
}