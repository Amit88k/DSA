// Use sliding window technique
// Keep on adding the elements if sum of elements is smaller than um we are looking for
// Subtract the leftmost element if sum of elements is greater than sum we are looking for
// If equal print it, Maintain the variable for left variable
#include<iostream>
using namespace std;
int main()
{
    int t,s,i,j,p,q;
    long long int sum=0,n;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        cin>>s;
       long long int a[n];
        for(j=0;j<n;j++)
        cin>>a[j];
        p=0;
        q=0;
        sum=0;
        while(q<n)
        {
            while(sum<s)
            {
            sum=sum+a[q];
                        q=q+1;
            }
            while(sum>s)
            {
            sum=sum-a[p];
            p=p+1;
            }
            if(sum==s)
            break;
        }

        if(sum==s)
        cout<<p+1<<" "<<q<<endl;
        else
        cout<<"-1"<<endl;
    }
    return 0;
}
