#include <iostream>
using namespace std;
//1. Reverse from 0 to d-1
//2. Reverse from d to n-1
//3. Reverse from 0 to n-1
//4. Print the output
int main() {
	int t,i,j,n,d;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>n;
	    cin>>d;
	    int a[n];
	    for(j=0;j<n;j++)
	    cin>>a[j];
	    j=0;
	    int k=d-1;
	    // Reverse from 0 to d-1
	    while(j<=k)
	    {
	        int temp=a[j];
	        a[j]=a[k];
	        a[k]=temp;
	        j=j+1;
	        k=k-1;
	    }
	    j=d;
	    k=n-1;
	    //Reverse from d to n-1
	    while(j<=k)
	    {
	        int temp=a[j];
	        a[j]=a[k];
	        a[k]=temp;
	        j=j+1;
	        k=k-1;
	    }
	    j=0;
	    k=n-1;
	    //Reverse the whole array
	    while(j<=k)
	    {
	       int temp=a[j];
	        a[j]=a[k];
	        a[k]=temp;
	        j=j+1;
	        k=k-1;
	    }
	    for(j=0;j<n;j++)
	    cout<<a[j]<<" ";
	    cout<<endl;

	}
	return 0;
}
