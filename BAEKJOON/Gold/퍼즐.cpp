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

#define endl "\n"
using LL = long long;
using namespace std;

int dxy[][2] = { {0,1},{1,0}, {0,-1},{-1,0} };
int ans = -1;
set<string> check;

void BFS(string s)
{
    queue<pair<string, int>> q;
    q.push({ s, 0 });
    while (!q.empty())
    {
        string cur = q.front().first;
        int cnt = q.front().second;
        q.pop();

        if (cur == "123456780" && (ans == -1 || ans > cnt))
            ans = cnt;

        int zero = cur.find('0');
        int x = zero / 3, y = zero % 3;

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dxy[i][0];
            int ny = y + dxy[i][1];

            if (nx < 0 || ny < 0 || nx >= 3 || ny >= 3) continue;
            string now = cur;
            swap(now[x * 3 + y], now[nx * 3 + ny]);

            if (check.find(now) == check.end())
            {
                check.insert(now);
                q.push({ now,cnt + 1 });
            }
        }
    }
}

void Answer()
{
    string s = "";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            char c;
            cin >> c;
            s += c;
        }
    }
    check.insert(s);
    BFS(s);
    cout << ans;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}