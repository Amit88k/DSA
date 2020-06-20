    for(int i = 2; i <= vec.size(); i++){

#include <vector>
#include <iostream>
using namespace std;

void isPrime(int num){
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