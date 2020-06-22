#include<iostream>
using namespace std;
//Factorials of large numbers
//Given an integer, the task is to
//find factorial of the number.
unsigned int factorial(unsigned int n)
{
    if (n==0)
        return 1;
    return n*factorial(n-1);
}
int main()
{
    int n=5;
    cout<<factorial(n);
}
//we solved this by recursion
