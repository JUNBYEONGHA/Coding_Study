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
#include <sstream>
#include <set>
#include <map>
#include <climits>

#define endl "\n"
using LL = long long;
using namespace std;

void Answer()
{
	int T;
	cin >> T;
	while (T--) {
		int N, M;
		cin >> N >> M;
		for (int m_idx = 0; m_idx < M; m_idx++) {
			int a, b;
			cin >> a >> b;
		}
		cout << N - 1 << endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}