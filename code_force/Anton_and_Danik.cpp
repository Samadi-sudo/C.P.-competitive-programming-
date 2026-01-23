//https://codeforces.com/problemset/problem/734/A

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int nbr;
    std::string rounds;
    cin >> nbr >> rounds;
    int a = 0;
    int d = 0;
    for (char i : rounds)
    {
        if (i == 'A')
            a++;
        if (i == 'D')
            d++;
    }
    if (a > d)
        cout << "Anton";
    else if(a < d)
        cout << "Danik";
    else
        cout << "Friendship";
}
