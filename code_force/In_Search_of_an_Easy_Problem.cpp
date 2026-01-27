//https://codeforces.com/problemset/problem/1030/A

#include <iostream>
#include <string>
using namespace std;

int main()
{
   std::string n;
   getline(cin, n);
   std::string str;
   getline(cin, str);
   if (str.find('1') != string::npos)
        cout << "HARD";
   else
        cout << "EASY";
}
