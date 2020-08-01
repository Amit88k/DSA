//to print Kaju Katli ,first print upward triangle then downward

#include <iostream>
using namespace std;
int main()
{
    int space, rows,i,k;
    cout <<"Enter number of rows: ";
    cin >> rows;
    //To print upward traingle
    for(i=1;i<= rows;i++)
    {
        k=0;
        //Print the spaces on left side
        for(space=1;space<=rows-i;space++)
        {
            cout <<" ";
        }

        //Print the stars
        while(k != i)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }

    //To print Downward Triangle
    for(i=1;i<=rows-1;i++)
    {
        k=0;
        // To print spaces on left side
        for(space=1;space<=i;space++)
        {
            cout <<" ";
        }

        //To print stars in each row
        while(k != rows-i)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }

    return 0;
}
