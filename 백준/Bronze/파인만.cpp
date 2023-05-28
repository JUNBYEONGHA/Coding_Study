#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>

#define endl "\n"
using namespace std;

void Answer()
{
    int n;
    while (1)
    {
        int ans = 1;
        cin >> n;
        if (!n)break;
        for (int i = 2; i <= n; i++)
            ans += i * i;
        if (n != 1)cout << ans << '\n';
        else cout << 1 << '\n';
    }
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}