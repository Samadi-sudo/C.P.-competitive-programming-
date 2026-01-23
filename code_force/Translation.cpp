//https://codeforces.com/problemset/problem/41/A
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    std::string s;
    std::string t;
    cin >> s >> t;
    reverse(t.begin(),t.end());
    if (s == t)
        cout << "YES";
    else
        cout << "NO";
}
