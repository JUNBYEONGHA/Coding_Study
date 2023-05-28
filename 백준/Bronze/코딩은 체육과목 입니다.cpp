#include <iostream>
#include <stack>

#define endl "\n"
using namespace std;

void Answer()
{
    int N;
    cin >> N;
    string s = "int";
    for (int i = 0; i < N / 4; i++)
    {
        s = "long " + s;
    }
    cout << s;  
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    Answer();
}