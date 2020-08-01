#include<iostream>
using namespace std;
int main()
{
    string c,d;
    cin>>c;
    cin>>d;
    //Make two arrays of length 26 mark all the position in both the arrays equal to 1
    int a[26],b[26];
    for(int i=0;i<26;i++)
    {
        a[i]=0;
        b[i]=0;
    }
    int i,j=0;
    //increase the array position by 1 when character appears, After loop gets over It will give each character numbers
    //Suppose 'a' comes then its ASCII value is 97, 97-97=0 at 0th position 1 gets stored .
    //In similar way 1st position represents 'b' as 98-97=1
    for(i=0;i<c.size();i++)
        a[int(c[i])-97]=a[int(c[i])-97]+1;

    for(i=0;i<d.size();i++)
        b[int(d[i])-97]=b[int(d[i])-97]+1;

    //Check whether array a and b are equal if true then print yes a otherwise print no
    for(i=0;i<26;i++)
    {
        if(a[i]==b[i])
            j=j+1;
    }
    if(j==26)
        cout<<"Yes\n";
    else
        cout<<"No\n";

return 0;
}
