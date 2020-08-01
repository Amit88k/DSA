#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);//to input a space separated string
    int a[257];
    for(int i=0;i<257;i++)
        a[i]=0;

/* Make a array for 257 size, whenever a character comes, its ASCII value is calculated and 1 is stored at the same position in the array.
Print the character, and store 1 at that position when the same character  will come reappear
then it will not enter into the if position as it already 1*/
   for(int i=0;i<s.size();i++)
    {
      if(a[int(s[i])]==0)
      {
          cout<<s[i];
          a[int(s[i])]=1;
      }
      if(s[i]==' ')
        cout<<' ';
    }
    return 0;
}
