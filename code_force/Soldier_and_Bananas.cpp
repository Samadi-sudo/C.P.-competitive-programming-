//https://codeforces.com/problemset/problem/546/A

#include <iostream>

using namespace std;

int main()
{
    int fbanana;
    int money;
    int hmuch;
    cin >> fbanana >> money >> hmuch;
    int res = 0;
    for (int i = 1; i <= hmuch ; i++)
        res += fbanana * i;
    if ((res - money) > 0)
        cout << (res - money);
    else
        cout << 0;
}
