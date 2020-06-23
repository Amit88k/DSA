#include<iostream>
using namespace std;
//Modular exponentiation
//Given three numbers x, y and p, compute (xy) % p.
int main()
{
    int x,y,p ;
    cin>> x;
    cin>> y;
    cin>> p;
    cout << (x^y)%p ;
}


