#include<iostream>
using namespace std;
int main()
//Take N(number of rows), print following pattern (N=5)
// 1 2 3 4 5
// 1 2 3 4 *
// 1 2 3 * * *
// 1 2 * * * * *
// 1 * * * * * * *
{
    int n,i,j,star=1;
    cin>>n;

    for(i=0;i<n;i++)
        ////first for loop for rows
    {
        for(j=1;j<=n-i;j++)
            ////second for loop for coloumns
            cout<<j<<" ";
        if(i!=0)
        //this if loop don't run for i=o
        {
        for(j=1;j<=star;j++)
            cout<<"* ";
        star=star+2;
        }
        cout<<endl;
    }

    return 0;
}
