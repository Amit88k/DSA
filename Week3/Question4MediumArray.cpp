#include <iostream>
using namespace std;
//Using binary search we can do it in log(n) .
//Try to get the position of first 0 and then subtract length of array from first 0 position
int main()
{
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
        cin>>a[j];

        int low=0,high=n-1,f=0;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(mid==0 && a[mid]==0 || a[mid]==0 && a[mid-1]==1)//If mid==0 and at 0th position element is 0 then all the array have 0
                //If a[mid]==0 then if it is the first 0, a[mid-1] will be 1
            {
            f=n-mid;
            break;
            }
            else if(a[mid]==1)//If array mid==1 then surely left side of mid have all elements 1 , we need to make low=mid+1
                low=mid+1;
            else
            high=mid-1; //If it is not first 1 then it will be on left side  that's why high=mid-1
        }
        cout<<f<<endl;
    }
	return 0;
}
