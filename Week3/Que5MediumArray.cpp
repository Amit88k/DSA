#include <iostream>
using namespace std;
//To sort the array having  0,1,2
//Count all 0 ,1 and 2
//First make the count of zero number's as 0
//Make count of 1 as 1 in array and after that do same for second
int main()
{
	int t,n,zero,one,two;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>n;
	    zero=0;
	    one=0;
	    two=0;
	    int a[n];
	    for(int j=0;j<n;j++)
	    cin>>a[j];
	    for(int j=0;j<n;j++)
	    {
	        if(a[j]==0)
	        zero=zero+1;
	        else if(a[j]==1)
	        one=one+1;
	        else
	        two=two+1;
	    }
	    for(int j=0;j<zero;j++)
	    a[j]=0;
	    for(int j=zero;j<one+zero;j++)
	    a[j]=1;
	    for(int j=zero+one;j<two+one+zero;j++)
	    a[j]=2;

	    for(int j=0;j<n;j++)
	    cout<<a[j]<<" ";
	    cout<<endl;
	}
	return 0;
}
