#include<bits/stdc++.h>
using namespace std;
//In mirror inverse we just need to check if we make array element equal to index and then look for array element .
//If all the value matches i then , it is Mirror Inverse otherwise not
bool isMirrorInverse(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[arr[i]] != i)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    if (isMirrorInverse(arr,n))
        cout<<"Yes";
    else
       cout<<"No";
    return 0;
}
