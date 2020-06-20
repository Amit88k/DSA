        return false;

#include <vector>
#include <iostream>
using namespace std;

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