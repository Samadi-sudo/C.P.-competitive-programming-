//https://codeforces.com/problemset/problem/617/A
#include <iostream>

using namespace std;

int main()
{
    int sahbo;
    cin >> sahbo;
    int counter = sahbo / 5;
    if (sahbo%5)
        counter++;
    cout << counter;
}
