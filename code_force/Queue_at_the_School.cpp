//https://codeforces.com/problemset/problem/266/B

#include<iostream>
#include <string>
using namespace std;

int main()
{
    int students;
    int time;
    std::string queue;
    cin >> students;
    cin >> time;
    cin >> queue;
    while (time > 0)
    {
        for(int i= 0 ; i < students; i++)
        {
            if (queue[i]=='B')
            {
                if (queue[i + 1] == 'G')
                {
                    queue[i]= 'G';
                    queue[i+1]= 'B';
                    i++;
                }
            }
        }
        time--;
    }
    cout << queue;
}
