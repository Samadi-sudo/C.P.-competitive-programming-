//https://codeforces.com/problemset/problem/677/A

#include <iostream>

using namespace std;

int main()
{
    int friends;
    int fence;
    int height;
    int ctr = 0;
    cin >> friends >> fence;
    for (int i = 0; i < friends; i++)
    {
        cin >> height;
        if(height > fence)
            ctr += 2;
        else
            ctr++; 
    }
    cout << ctr;
}
