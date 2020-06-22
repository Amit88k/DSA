#include<iostream>
using namespace std;
int main()
//Take N(number of rows), print following pattern (N=4)

// 1           1
// 1 2       2 1
// 1 2 3   3 2 1
// 1 2 3 4 3 2 1
{
    int i,j,n,space;
    cin>>n;
    for(i=1;i<=n;i++)
        ////first for loop for rows
    {
        //to print leftside numbers
        for(j=1;j<=i;j++)
        ////second for loop for coloumns
          cout<<j<<" ";

        //to print spaces
        space=((n-i)*2)-1;
        for(j=1;j<=space;j++)
            cout<<"  ";
        if(i==n)
            j=i-1;
        else
        j=i;

        //to print right side numbers
        for(;j>=1;j--)
            cout<<j<<" ";
        cout<<endl;

    }
    return 0;
}
