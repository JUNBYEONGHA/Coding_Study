#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <deque>
#include <queue>
#include <stack>
#include <cstring>

#define endl "\n"
using LL = long long;
using namespace std;

void Answer()
{
    int N, ans = 0;
    cin >> N;
    for (int i = 1; i < N; i++) {
        for (int j = i; j < N; j++) {
            int k = N - i - j;
            if (j > k) break;
            if (i + j > k) ans++;
        }
    }
    cout << ans;
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}