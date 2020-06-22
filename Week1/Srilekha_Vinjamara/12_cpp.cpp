/* 
c++ program to find all prime numbers till and NOT including given input number
Approach: sieve of erasthosthenes, all multiples of a number will not be prime and are marked false
*/

#include <vector>
#include <iostream>
using namespace std;

// function isPrime is used to find if all prime numbers from 2 to the given range = num
void isPrime(int num){
    // vec is the variable used to store all prime numbers till and NOT including number num
    vector<bool> vec(num, true);

    for(int i = 2; (i*i) < num; i++){
        if(vec[i] == true){
            for(int j = (i*i); j <= num; j += i)
                vec[j] = false;
        }
    }
    for(int i = 2; i <= vec.size(); i++){
        if(vec[i])
            cout << i << " ";
    }
}

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int num;
	    cin >> num;
	    isPrime(num);
	    cout << "\n";
	}
	return 0;
}