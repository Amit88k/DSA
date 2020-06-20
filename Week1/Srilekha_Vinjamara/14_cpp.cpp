    	    cout << "No\n";

#include <iostream>
using namespace std;

int main() {
	//code
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