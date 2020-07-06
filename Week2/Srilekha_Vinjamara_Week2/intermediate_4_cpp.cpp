#include <iostream>
#include <vector>
using namespace std;

// function to check if any combination of digits with a number having >= 3 digits is divisible by 8
bool isDivBy8(int x) {
    if (x % 8 == 0) {
        return true;
    }
    if (x <= 10) {
        return false;
    }
    if (x < 100) {
        return ((x%10)*10 + x/10) % 8 == 0;
    }
    
    // vector v is used to store all digits in a number with more than 2 digits, to find combinations of 3 digits
    vector<int> v;
    while (x > 0) {
        v.push_back(x % 10);
        x /= 10;
    }
    
    const int kN = v.size();
    for (int i = 0; i < kN; i++) {
        const int k100i = 100*v[i];
        for (int j = 0; j < kN; j++) {
            if (j == i) {
                continue;
            }
            const int k10j = 10*v[j];
            for (int k = 0; k < kN; k++) {
                if (i == k || j == k || (v[k]&1) != 0) {
                    continue;
                }
                if ((k100i + k10j + v[k]) % 8 == 0) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
	    int n;
	    cin >> n;
	    cout << (isDivBy8(n) ? "Yes\n" : "No\n");
	}
	return 0;
}