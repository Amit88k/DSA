#include <iostream>
using namespace std;
//In Liner search compare each and every element of array with the element you are looking for
//If element is found then set the flag variable value equal to 1
// Print flag variable
int main() {
	int i,j,n,x,f,t;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    f=-1;
	    cin>>n;
	    cin>>x;
	    int a[n];
	    for(j=0;j<n;j++)
	        cin>>a[j];
	    for(j=0;j<n;j++)
	    {
	        if(a[j]==x)
	        {
	        f=j+1;
	        break;
	        }
	    }
	    cout<<f<<endl;
	}
	return 0;
}
