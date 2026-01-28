//https://codeforces.com/problemset/problem/467/A

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    int ctr = 0;
    cin >> n;
    int occuper;
    int free;
    while (n > 0)
    {
        cin >> occuper;
        cin >> free;
        if (free > occuper + 1)
            ctr++; 
        n--;
    }
    cout << ctr;
}
