#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

#define endl "\n"
using namespace std;

void Answer()
{
    string n, ans;
    cin >> n;
    int len = n.size();
    int sum = 0;
    int cnt = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        cnt++;
        if (n[i] == '1')
            sum += pow(2, cnt - 1);
        if (i == 0)
        {
            ans += sum + '0';
            break;
        }
        if (cnt == 3)
        {
            ans += sum + '0';
            sum = 0;
            cnt = 0;
        }

    }
    for (int i = ans.size() - 1; i >= 0; i--)
        cout << ans[i];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}