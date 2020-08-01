#include<bits/stdc++.h>
//#include<iostream>
//#include<unordered_map>m;
using namespace std;
//To find the majority element store the count of each element
//Then check if cout is greater than n/2 print yes
//Otherwise print No
int main()
{
   int n;
   cin>>n;
   unordered_map <int,int>m;
   int arr[n];
   for(int i=0;i<n;i++)
        cin>>arr[i];
   for(int i=0;i<n;i++)
    m[arr[i]]++;
   int f=0;
   for(int i=0;i<n;i++)
   {
       if(m[arr[i]]>n/2)
        f=1;
   }
if(f==1)
    cout<<"YES";
else
    cout<<"NO";
return 0;
}
