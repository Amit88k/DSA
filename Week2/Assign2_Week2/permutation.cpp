//Permutations of a given string
//Problem: Given a string S. The task is to print all permutations of a given string.

//Example:
//Input: ABC
//Output: ABC ACB BAC BCA CAB CBA
//Explanation: Given string ABC has permutations in 6 forms as
//ABC, ACB, BAC, BCA, CAB and CBA. Input: ABSG
//Output: ABGS ABSG AGBS AGSB ASBG ASGB BAGS BASG BGAS BGSA BSAG
//BSGA GABS GASB GBAS GBSA GSAB GSBA SABG SAGB SBAG SBGA SGAB SGBA//
#include<iostream>
using namespace std;

void perm(char s[], int k)
{
    static int A[10]={0};
//using static it means basically that we can use
//the variable defined with static can be used anywhere in code
    static char res[10];
    int i;
    if (s[k]=='\0')
    {
        res[k]='\0';
        cout<<res<<" ";
    }
    else
    {
        for(int i=0;s[i]!='\0';i++)
        {
            if(A[i]==0)
            {
                res[k]=s[i];
                A[i]=1;//A[i]=1 means at this position is not empty and we can't fill it
                perm(s,k+1);//using backtracking
                A[i]=0;//A[i]= means at this position is empty and we can fill it
            }
        }
    }

}
int main()
{
    char s[]="ABC";
    perm(s,0);
}
