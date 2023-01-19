#include <iostream>
#include <algorithm>
#include <queue>
#include <string>

#define endl "\n"
using namespace std;

void Answer()
{
    long long num, ans = 0;
    char op;
    cin >> num;
    ans = num;
    while (1)
    {
        cin >> op;
        if (op == '=') { cout << ans << '\n'; break; }
        cin >> num;
        if (op == '+')
            ans += num;
        else if (op == '-')
            ans -= num;
        else if (op == '*')
            ans *= num;
        else if (op == '/')
            ans /= num;
    }
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}