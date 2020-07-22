#include <iostream>
using namespace std;
#include <unordered_map>
//To print an element which occur only once
//Store the count of each number in unordered map as key value pair
//Check if value is 1 then print key
int main()
{
	int t,n,k;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>n;
	    cin>>k;
	    unordered_map<int,int>m;
	    int a[n];
	    for(int j=0;j<n;j++)
	    cin>>a[j];
	    for(int j=0;j<n;j++)
	    m[a[j]]++;
	    for(int j=0;j<n;j++)
	    {
	        if(m[a[j]]==1)
	        {
	        cout<<a[j]<<"\n";
	        break;
	        }
	    }
	}
	return 0;
}
