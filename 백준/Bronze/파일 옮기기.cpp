#include <iostream>
#include <algorithm>
#include <string>

#define endl "\n"
using namespace std;

void Answer()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a + d <= b + c)
        cout << a + d;
    else
        cout << b + c;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}