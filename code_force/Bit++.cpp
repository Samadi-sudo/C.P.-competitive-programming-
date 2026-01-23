//https://codeforces.com/problemset/problem/282/A
#include<iostream>
#include<string.h>

using namespace std;
int main()
{
	int a;
	int len;
	int var = 0;

	string s;
	cin >> a;
	while (a >= 0)
	{
		getline(cin, s);
		len = s.size();
		while (len > 0)
		{
			if (s[len - 1] == '+')
			{
				var++;
				break;
			}
			else if (s[len - 1] == '-')
			{
				var--;
				break;
			}	
			len--;
		}
		a--;
	}
	cout << var << endl;
}
