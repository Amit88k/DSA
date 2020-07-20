#include <iostream>
using namespace std;
int main() {
	int t,n,m,i,j,num1,num2;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>n;
	    int a[n];
	    num1=0;
	    num2=0;
	    for(j=0;j<n;j++)//to input first array
	    cin>>a[j];

	    cin>>m;
	    int b[m];
	    for(j=0;j<m;j++)//to input second array
	    cin>>b[j];

	    for(j=0;j<n;j++)
	    num1=a[j]+num1*10;//to form number from 1st array take digit and multiply the number with 10 everytime


	    for(j=0;j<m;j++)
	    num2=b[j]+num2*10;//to form number from 2nd array take each digit and multiply the number by 10 and add it to number

	    cout<<(num1+num2)<<endl;
	}
	return 0;
}
