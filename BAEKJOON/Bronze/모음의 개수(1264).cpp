#include <iostream>
#include <string>

#define endl "\n"
using namespace std;

void Answer()
{
    string s;
    while (getline(cin, s))
    {
        int vowel = 0;
        if (s.compare("#") == 0) break;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
                s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            {
                vowel++;
            }
        }
        cout << vowel << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    Answer();
}