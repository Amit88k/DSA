#include <bits/stdc++.h> 
using namespace std; 

// function to print the longest palindromic substring
void printSubStr(char* str, int low, int high) { 
	for (int i = low; i <= high; ++i) 
	    cout << str[i]; 
} 

// function used to compute the longest palindromic substring
void longestPalSubstr(char* str) { 
	// The length of Longest palindromic substring
	int maxLength = 1, start = 0, len = strlen(str), low, high; 
	
	for (int i = 1; i < len; ++i) { 
		// find the longest even length palindrome with center points as i-1 and i. 
		low = i - 1; 
		high = i; 
		while (low >= 0 && high < len 
			&& str[low] == str[high]) { 
			if (high - low + 1 > maxLength) { 
				start = low; 
				maxLength = high - low + 1; 
			} 
			--low; 
			++high; 
		} 
		
		// find the longest odd length palindrome with center point as i 
		low = i - 1; 
		high = i + 1; 
		while (low >= 0 && high < len 
			&& str[low] == str[high]) { 
			if (high - low + 1 > maxLength) { 
				start = low; 
				maxLength = high - low + 1; 
			} 
			--low; 
			++high; 
		} 
	} 
	printSubStr(str, start, start + maxLength - 1); 
} 

int main() 
{ 
	int t;
	cin >> t;
	while(t--){
	    char* str;
	    cin >> str;
	    longestPalSubstr(str);
	    cout << endl; 
	}
	return 0; 
} 