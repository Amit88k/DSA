#include <iostream>
using namespace std;

void sieve_of_erasthones(int a[])
{
int p=10000,i,q=2,j;
for(i=0;i<=p;i++)
    a[i]=1;
a[0]=0;
a[1]=0;
while(q*q<=p)
{
    for(j=q*q;j<=p;j=j+q)
    a[j]=0;
    q=q+1;
}
}
int main() {
	int t,i,n,j;
	cin>>t;
	int a[10000];
	sieve_of_erasthones(a);
	for(i=0;i<t;i++)
	{
	   cin>>n;
	   for(j=0;j<=n;j++)
	   {
	       if(a[j]==1)
	       cout<<j<<" ";
	   }
	   cout<<endl;
	}
	return 0;
}
