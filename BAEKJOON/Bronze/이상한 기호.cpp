#include <iostream>
#include <string>

#define endl "\n"
using namespace std;

void Answer()
{
    int a, b;
    cin >> a >> b;
    cout << (long long)(a + b) * (a - b);
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    Answer();
}