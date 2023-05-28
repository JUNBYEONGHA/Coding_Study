#include <iostream>
#include <string>
#include <algorithm>
#define endl "\n"
using namespace std;


void Answer()
{
    int a, b, c, d;
    while (1) {
        cin >> a >> b >> c >> d;
        if (!a && !b && !c && !d) break;
        cout << c - b << ' ' << d - a << '\n';
    }
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}