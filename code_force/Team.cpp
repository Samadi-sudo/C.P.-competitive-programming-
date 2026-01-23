//https://codeforces.com/problemset/problem/231/A
#include<iostream>
#include <string>
using namespace std;
int main ()
{
	string s;
	int a;
	int i;
	int flag;
	int count;

	flag = 0;
	count = 0;
	cin >> a;
	while (a >= 0)
	{
		getline(cin, s);
		i = 0;
		flag = 0;
		while (i < s.size())
		{
			if (s[i] == '1')
				flag++;
			i++;
		}
		if (flag > 1)
			count++;
		a--;
	}
	cout << count << endl;
}	
