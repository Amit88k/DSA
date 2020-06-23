#include<iostream>
using namespace std;
//Take N(number of rows), print the following pattern
// 0
// 1 1
// 2 3 5
// 8 13 21 34
void fib(int f[], int N)
{
	f[1] = 0;
	f[2] = 1;

	for (int i = 3; i <= N; i++)
		f[i] = f[i - 1] + f[i - 2];
}
//Basically this is a fabonacci series
void fiboTriangle(int n)
{
	int N = n*(n+1)/2;
	int f[N + 1];
	fib(f, N);

	int fiboNum = 1;
	for (int i = 1; i <= n;i++)
        //first for loop for rows
	{
		for (int j = 1;j <= i;j++)
		////second for loop for coloumns
			cout << f[fiboNum++] << " ";
		cout << endl;
	}
}
int main()
{
	int n = 4;
	fiboTriangle(n);
	return 0;
}
