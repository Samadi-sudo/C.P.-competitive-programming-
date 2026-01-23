//https://codeforces.com/problemset/problem/158/A
#include <iostream>
#include<vector>
using namespace std;

int main()
{
	int n,k,count;

	count = 0;
	cin >> n >> k;
	vector<int> scores(n);
	for (int i = 0; i < n; i++)
		cin >> scores[i];

	int threshold = scores[k-1];

	for (int score : scores)
		if (score >= threshold && score > 0)
			count++;
	cout << count << endl;


}
