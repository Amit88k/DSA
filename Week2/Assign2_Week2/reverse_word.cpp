// C++ program to print reverse
// of words in a string.
//Given a String of length S, reverse the whole string
// without reversing the individual words in it. Words are separated by dots.

#include<iostream>
using namespace std;

string wordReverse(string str)
{
	int i = str.length() - 1;
	int start, end = i + 1;
	string result = "";

	while(i >= 0)
	{
		if(str[i] == ' ')//searched for gap
		{
			start = i + 1;
			// putting the NULL character at the
            // position of space characters for
            // next iteration.
			while(start != end)
				result += str[start++];

			result += ' ';

			end = i;
		}
		i--;
	}
	start = 0;
	while(start != end)
		result += str[end--];

	return result;
}

// Driver code
int main()
{
	string str = "i like this program very much";

	cout << wordReverse(str);

	return 0;
}
