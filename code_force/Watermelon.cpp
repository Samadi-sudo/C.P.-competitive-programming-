//https://codeforces.com/problemset/problem/4/A

#include<iostream>
using namespace std;
int main()
{
	unsigned int a;
	cin >> a;
	if (a >= 1 && a <= 100)
		((a % 2) == 0 && a > 2) ? cout << "YES" : cout << "NO"; 
}
