//To print pair if primes
#include<iostream>
using namespace std;
void sieve_of_erasthones(int a[]) //Use sieve to calculate prime number
{
  int p=2,i;
  for(i=0;i<401;i++) //Mark all array index as 1
        a[i]=1;
a[0]=0;
a[1]=0;
  while(p*p<=400)
  {
      for(i=p*p;i<401;i=i+p)
        a[i]=0; //The numbers which are not prime will be marked as 0
      p=p+1;
  }
}
int main()
{
    int t,i,j,n,k;
    cin>>t;
    int a[401];

    sieve_of_erasthones(a); //Call the sieve function

    for(i=0;i<t;i++)
    {
      cin>>n;
      for(j=2;j<=n;j++)
      {
          for(k=2;k<=n;k++)
          {
              if(k*j<=n && a[k]==1 && a[j]==1) //To print the pairs
                cout<<j<<" "<<k<<" ";
          }
      }
      cout<<endl;
    }
    return 0;
}
