#include <iostream>
using namespace std;

// function to compute the sum left in each round of betting game
void bettingGame(string str){
    int bet = 1, sum = 4;
    int flag = 0;
    
    for(int i = 0; i < str.length(); i++){
        if(sum <= 0 || sum < bet){
            flag = 1;
            break;
        }
        if(str[i] == 'W'){
            sum += bet;
            bet = 1;
        }
        else{
            sum -= bet;
            bet = bet*2;
        }
    }
    if(flag != 0)
        cout << "-1\n";
    else 
        cout << sum << "\n";
}

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    string str;
	    cin >> str;
	    bettingGame(str);
	}
	return 0;
}