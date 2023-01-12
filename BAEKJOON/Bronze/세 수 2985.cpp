#include <iostream>
#include <algorithm>
#include <set>
#include <string>

#define endl "\n"
using namespace std;

void Answer()
{
    double a, b, c;
    cin >> a >> b >> c;
    if (a + b == c)
        cout << a << '+' << b << '=' << c;
    else if (a - b == c)
        cout << a << '-' << b << '=' << c;
    else if (a * b == c)
        cout << a << '*' << b << '=' << c;
    else if (a / b == c)
        cout << a << '/' << b << '=' << c;
    else if (a == b + c)
        cout << a << '=' << b << '+' << c;
    else if (a == b - c)
        cout << a << '=' << b << '-' << c;
    else if (a == b * c)
        cout << a << '=' << b << '*' << c;
    else if (a == b / c)
        cout << a << '=' << b << '/' << c;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}