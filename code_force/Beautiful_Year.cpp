//https://codeforces.com/problemset/problem/271/A

#include <iostream>
#include<algorithm>
#include<string>
using namespace std;

int check(int n)
{
    std::string d= to_string(n);
    for (char i : d)
    {
        if (std::count(d.begin(),d.end(),i) > 1)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;
    n++;
    while (1)
    {
        if (!check(n))
            n++;
        else
        {
            cout << n;
            break;
         }
    }
}
