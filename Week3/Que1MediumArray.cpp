#include <iostream>
#include<climits>
//To find the contiguous subarray with maximum sum
//Decalre two variables max_so_far and max_ending_here
//max_so_far stores the maximum sum till now
//max_ending_here considers the place where max_so_far get decreased
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        long long a[n];
        for(int j=0;j<n;j++)
        cin>>a[j];
    int max_so_far=INT_MIN,max_ending_here=0;
    for (int i=0;i<n;i++)
    {
        max_ending_here = max_ending_here+a[i];
        if (max_so_far < max_ending_here)// If the current sum is greater then make max_so_far equal to curent sum value
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    cout<<max_so_far<<endl;
    }
}
