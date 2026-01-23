//https://codeforces.com/problemset/problem/71/A

#include <iostream>
#include <string>

using namespace std;
int main ()
{
	int a,b;
	string s;
	cin >> a;
	while (a > 0)
	{
		cin >> s;
		b = s.size();
		(b > 10) ? (cout << s[0] << (b - 2) << s[b - 1]) << endl : (cout << s) << endl;
		a--;
	}
}
