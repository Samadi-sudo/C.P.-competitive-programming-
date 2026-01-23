//https://codeforces.com/problemset/problem/112/A

#include<iostream>
#include <string.h>
using namespace std;

void to_lower(string &s)
{
	for (char &ss:s)
	{
		if (ss >= 'A' && ss <= 'Z')
			ss += 32;
	}
}

int main()
{
	string s;
	string b;
	cin >> s >> b;
	to_lower(s);
	to_lower(b);
	if (s > b) cout << 1;
	else if (s < b) cout << -1;
	else cout << 0;
}
