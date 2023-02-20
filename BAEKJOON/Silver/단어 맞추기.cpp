#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <map>

#define endl "\n"
using namespace std;

void Answer()
{
    int t, cnt;
    string s, ans;

    cin >> t;
    while (t--) {
        cin >> s;
        cnt = 0;
        do {
            ans = s;
            if (++cnt == 2) break;
        } while (next_permutation(s.begin(), s.end()));
        cout << ans << '\n';
    }

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}