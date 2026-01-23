//https://codeforces.com/problemset/problem/263/A

#include <iostream>
using namespace std;

int main()
{
	int tab[5][5];
	int i,j,count,found;
	i = 0;
	j = 0;
	count = 0;
	found = 0;
	while (i < 5)
	{
		j = 0;
		while (j < 5)
		{
			cin >> tab[i][j];
			j++;
		}
		i++;
	}
	i = 0;
	j= 0;
	while (i < 5)
	{
		j = 0;
		while (j < 5)
		{
			if (tab[i][j])
			{
				found = 1;
				break;
			}
			j++;
		}
		if (found && tab[i][j])
		{	
			found = 1;
			break;
		}
		i++;
	}
	if (found == 0)
	{
		cout << 0 << endl;
		return 0;
	}

	while (i!=2)
	{
		if (i > 2)
		{
			i--;
			count++;
		}
		if (i < 2)
		{
			i++;
			count++;
		}
	}
	while (j != 2)
	{
		if (j > 2)
		{
			j--;
			count++;
		}
		if (j < 2)
		{
			j++;
			count++;
		}
	}
	cout << count << endl;
}
