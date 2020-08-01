#include <iostream>
using namespace std;
int main()
{
    int t,i,j,n,x;
	cin>>t; //Input the number of test cases
	for(i=0;i<t;i++)
	{
	  cin>>n;//Input the number of elements
	  cin>>x;//Input the number which you want to search
	  int arr[n];
	  for(j=0;j<n;j++)//Input the array in sorted form
	      cin>>arr[j];
	  int low=0,high=n-1,f=-1;
	  //Calculate the middle element in the range low to high.
	  //Check whether it is equal to mid element,If yes set f=1
	  // If 'x'  is smaller than arr[mid], the make high=mid-1; because other elements are greater than it
	  //If 'x' is higher than arr[mid] ,them make low=mid+1 ,because all left elements are less than x
	  while(low<=high)
	   {
	     int mid=(low+high)/2;
	     if(arr[mid]==x)
	       {
	        f=1;
	        break;
	       }
	      else if(arr[mid]<x)
	          low=mid+1;
	      else
	          high=mid-1;
	      }
	  cout<<f<<endl;
	}
	return 0;
}
