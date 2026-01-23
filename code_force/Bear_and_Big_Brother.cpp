#include <iostream>
#include <string>

using namespace std;

int main()
{
    std::string line;
    getline(cin, line);
    int limak = atoi(&line[0]);
    int bob = atoi(&line[2]);
    int ctr = 0;
    while (limak <= bob)
    {
        limak *= 3;
        bob *= 2;
        ctr++;
    }
    cout << ctr;
}
