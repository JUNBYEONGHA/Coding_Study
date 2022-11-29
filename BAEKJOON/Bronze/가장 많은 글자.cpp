#include <iostream>
#include <string>

#define endl "\n"
using namespace std;

int alpha[26];

void Answer()
{
    string s;
    while (cin >> s)
    {
        for (int i = 0; i < s.size(); i++)
        {
            alpha[s[i] - 'a']++;
        }
    }
    int maxalpha = 0;
    for (int i = 0; i < 26; i++)
    {
        maxalpha = max(maxalpha, alpha[i]);
    }
    for (int i = 0; i < 26; i++)
    {
        if (maxalpha == alpha[i])
        {
            cout << (char)(i + 'a');
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    Answer();
}