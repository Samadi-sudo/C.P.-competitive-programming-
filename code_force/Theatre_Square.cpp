//https://codeforces.com/problemset/problem/1/A
#include<iostream>
using namespace std;
int main()
{
	long long n,m,a,l1,l2;;

	cin >> n >> m >> a;
	l1 = (n + a - 1)/a;
	l2 = (m + a - 1)/a;
	cout << l1 * l2;
}
