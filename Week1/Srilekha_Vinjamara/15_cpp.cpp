/* 
c++ program to find pairs of primes whose product is less than or equal to the given input value
Approach: find all prime numbers, store them in a vector and then for every possible subset pair, if their product <= given input, print the pair
*/

#include <vector>
#include <iostream>
using namespace std;

// function isPrime is used to find if a number n is prime or not
bool isPrime(long int n)
{
    int flag=0;
    for(int i=2;(i*i)<=n;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0) 
        return true;
    else 
        return false;
}

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    // vec is a vector used to stor all prime numbers till given input range number: num
	    vector<int> vec;

	    long long num;
	    cin >> num;
	    for(int i = 2; i <= num; i++){
	        if(isPrime(i))
	            vec.push_back(i);
	    }
	    for(int i = 0; i < vec.size(); i++){
	        for(int j = 0; j < vec.size(); j++){
	            if(vec[i] * vec[j] <= num)
	                cout << vec[i] << " " 
	                     << vec[j] << " ";
	        }
	    }
	    cout << "\n";
	}
	return 0;
}