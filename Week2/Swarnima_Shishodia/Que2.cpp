#include <bits/stdc++.h>
using namespace std;
void allpermutation(string str)
{
    sort(str.begin(),str.end());//Sort the string lexicographically
     while(next_permutation(str.begin(),str.end()))// nextt_permutation function prints all the permutations of a string
     cout << str << endl;
}
int main()
{
    string str;
    cin>>str;//Input the string
    allpermutation(str);//Call the function
    return 0;
}
