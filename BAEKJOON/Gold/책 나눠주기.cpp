#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
#include <cstring>

#define endl "\n"
using namespace std;

vector<pair<int, int>> v(1010);
int work[1010];
bool finish[1010];
int T, N, M;

bool DFS(int x) {
    for (int t = v[x].first; t <= v[x].second; t++)
    {
        if (finish[t]) continue;
        finish[t] = true;
        if (work[t] == -1 || DFS(work[t])) {
            work[t] = x;
            return true;
        }
    }
    return false;
}

void Answer()
{
	int t;
	cin >> t;
	while (t--)
	{
        v.clear();
        cin >> N >> M;
        for (int i = 0; i < M; i++)
        {
            int a, b;
            cin >> a >> b;
            v.push_back({ a,b });
        }

        fill(work, work + 1010, -1);
        int ans = 0;

        for (int i = 0; i < M; i++)
        {
            fill(finish, finish + 1010, false);
            if (DFS(i)) ans++;
        }
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