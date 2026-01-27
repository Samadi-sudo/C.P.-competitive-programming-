//https://codeforces.com/problemset/problem/116/A

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> table(n);
    int enter;
    int out;
    int passengers = 0;
    for(int i= 0; i < n; i++)
    {
        cin >> out;
        cin >> enter;
        passengers = passengers - out + enter;
        table[i] = passengers;
    }
    cout << *(std::max_element(table.begin(),table.end()));
}
