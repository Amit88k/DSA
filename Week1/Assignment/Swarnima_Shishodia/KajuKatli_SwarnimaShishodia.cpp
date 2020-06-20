#include <iostream>
using namespace std;
int main()
{
    int space, rows,i,k;
    cout <<"Enter number of rows: ";
    cin >> rows;
    for(i=1;i<= rows;i++)
    {
        k=0;
        for(space=1;space<=rows-i;space++)
        {
            cout <<" ";
        }

        while(k != i)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }
    for(i=1;i<=rows-1;i++)
    {
        k=0;
        for(space=1;space<=i;space++)
        {
            cout <<" ";
        }

        while(k != rows-i)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }

    return 0;
}
