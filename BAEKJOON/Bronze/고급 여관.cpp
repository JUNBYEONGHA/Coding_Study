#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
    int a1, a2, b1, b2;
    cin >> a1 >> a2;
    cin >> b1 >> b2;
    while (1)
    {
        a2 -= b1;
        b2 -= a1;
        if (a2 < 1 || b2 < 1) { break; }
    }
    if (a2 < 1 && b2 < 1) { cout << "DRAW" << endl; }
    else
    {
        cout << "PLAYER ";
        cout << (a2 > b2 ? 'A' : 'B');
    }
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}