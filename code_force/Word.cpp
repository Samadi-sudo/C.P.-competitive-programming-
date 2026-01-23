#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    std::string kalma;
    cin >> kalma;
    int up = 0;
    int low = 0;
    for (int i = 0; i < kalma.size(); i++)
    {
        if (isupper(kalma[i]))
            up++;
        if (islower(kalma[i]))
            low++;
    }
    if (up > low)
    {
        for (int i = 0; i < kalma.size(); i++)
            kalma[i] = toupper(kalma[i]);
    }
    else
        for (int i = 0; i < kalma.size(); i++)
            kalma[i] = tolower(kalma[i]);
    cout << kalma;
}
