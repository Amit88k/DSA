#include <bits/stdc++.h>
#define limit 400
using namespace std;
//Print all pairs (sets) of
//prime numbers (p,q) such that p*q <= n, where n is given number.
bool isprime[limit+1];
vector<int> prime;

void sieve(){
    for(int i = 2 ; i <= limit ; i++){
        isprime[i] = true;
    }
    isprime[0] = isprime[1] = false;
    for(int i = 2 ; i*i <= limit ; i++){
        if(isprime[i]){
            for(int j = 2*i ; j <= limit ; j += i){
                isprime[j] = false;
            }
        }
    }
    for(int i = 2 ; i <= limit ; i++){
        if(isprime[i]){
            prime.push_back(i);
        }
    }
    /*for(auto x : prime){
        cout << x << " " << endl;
    }*/
}
int main(){
    sieve();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 0 ; i < prime.size() ; i++){
            for(int j = 0 ; j < prime.size() ; j++){
                if(prime[i]*prime[j] <= n){
                    cout << prime[i] << " " << prime[j] << " ";
                }else{
                    break;
                }
            }
        }
        cout << endl;
    }
}
