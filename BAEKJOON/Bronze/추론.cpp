#include <iostream>
#include <string>

#define endl "\n"
using namespace std;

void Answer()
{
    int N;
    cin >> N;
    int a, b;
    for (int i = 0; i < N - 1; i++)
    {
        cin >> a;
    }
    cin >> b;
    if (b % a == 0)
    {
        cout << b * (b / a);
    }
    else
    {
        cout << b + (b - a);
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    Answer();
}