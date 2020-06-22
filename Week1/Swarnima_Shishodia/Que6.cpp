//To print the fibonacci Triangle
#include<iostream>
using namespace std;
int main()
{
    //Take two variables a and b, initialize a as 0 and b as 1
    int i,j,a=0,b=1,c,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {

           if(i==1) //To print first row
                cout<<a<<" ";
           else if(i==2 && j==1)//To print second row first element
                cout<<b<<" ";
           else
           {
               c=a+b;//calculates the next element which we need to print
               cout<<c<<" ";
               a=b; //Swap the variables so that a and b stores the last two numbers
               b=c;
           }
        }
        cout<<endl;
    }
    return 0;
}
