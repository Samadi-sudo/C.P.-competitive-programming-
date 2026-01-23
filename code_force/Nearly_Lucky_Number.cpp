//https://codeforces.com/problemset/problem/110/A

#include<iostream>

using namespace std;

int main()
{
    int ctr = 0;
    std::string n;
    cin >> n;
    for(char i : n)
    {
        if (i == '7' || i == '4')
            ctr++;
    }
    if (ctr == 7 || ctr == 4)
        cout << "YES";
    else
        cout << "NO";
}
