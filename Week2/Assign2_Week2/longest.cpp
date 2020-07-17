//Longest Even Length Substring
//Problem: For given string ‘str’ of digits, find length of the longest
//substring of ‘str’, such that the length of the substring is 2k digits
//and sum of left k digits is equal to the sum of right k digits.
//Input: 000000
//Output: 6
//Input: 1234123
//Output: 4

#include<bits/stdc++.h>
using namespace std;

int findLength(char *str)
{
	int n = strlen(str);
	int maxlen =0; // Initialize result

    for (int i=0; i<n; i++)
	{
		// Choose ending point of even length substring
		for (int j =i+1; j<n; j += 2)
		{
			int length = j-i+1;//Find length of current substr

			// Calculate left & right sums for current substr
			int leftsum = 0, rightsum =0;
			for (int k =0; k<length/2; k++)
			{
				leftsum += (str[i+k]-'0');
				rightsum += (str[i+k+length/2]-'0');
			}
            if (leftsum == rightsum && maxlen < length)
					maxlen = length;
		}
	}
	return maxlen;
}
int main(void)
{
	char str[]="153118023";
	cout << "Length of the substring is "
		<< findLength(str);
	return 0;
}

