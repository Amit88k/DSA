#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
        {
	    int n;
	    cin>>n;
	    vector<int> v;
	    //Store the digits of a number in vector
	    while(n!=0)
	    {
	        v.push_back(n%10);
	        n/=10;
	    }
	    //Sort the vector
	    sort(v.begin(), v.end());
	    int len=v.size();//Store the length of a vector
	    bool found=false;
	     while(next_permutation(v.begin(), v.end()))// Using next_permutation find all the permutation of a number
	     {
    	     int sum=0;
    	     for(int j=0;j<len;j++)
    	     {
    	         sum=sum*10+v[j];
    	     }//Form the number
    	     if(sum%8 == 0)//If it is divisible by 8 then print found
    	     {
    	         found = true;
    	         break;
    	     }
	     }
	     //Print Yes if any permutation is divisible by 8 else print no
	    if(found)
	        cout<<"Yes\n";
	    else
	        cout<<"No\n";
	}
	return 0;
}
