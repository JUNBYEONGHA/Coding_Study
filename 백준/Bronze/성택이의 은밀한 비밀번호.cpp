#include <iostream>
#include <stack>

#define endl "\n"
using namespace std;

void Answer()
{
    int N;
    cin >> N;
    while (N--)
    {
        string s;
        cin >> s;
        if (s.size() >= 6 && s.size() <= 9)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    Answer();
}