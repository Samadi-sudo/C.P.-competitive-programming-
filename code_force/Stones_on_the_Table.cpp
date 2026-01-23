//https://codeforces.com/problemset/problem/266/A

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    std::string hjar;
    cin >> n;
    cin >> hjar;
    int ctr = 0;
    for (int i = 0; i < n; i++)
    {
        if (hjar[i] == hjar[i + 1])
            ctr++;
    }
    cout << ctr;
}
