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
int hdxy[][2] = { {-1,-2},{-2,-1},{-2,1},{-1,2},{1,2},{2,1},{2,-1},{1,-2} };
int K, W, H;
bool visit[200][200][31];
int Zoo[200][200];

void BFS()
{
    queue<pair<pair<int, int>, pair< int, int>>> q;
    q.push({ { 0,0 }, { 0, 0 } });
    visit[0][0][0] = true;
    while (!q.empty())
    {
        int x = q.front().first.first;
        int y = q.front().first.second;
        int cnt = q.front().second.first;
        int k = q.front().second.second;
        q.pop();

        if (x == H - 1 && y == W - 1)
        {
            cout << cnt; return;
        }

        if (k < K)
        {
            for (int i = 0; i < 8; i++)
            {
                int nx = x + hdxy[i][0];
                int ny = y + hdxy[i][1];
                if (nx < 0 || ny < 0 || nx >= H || ny >= W) continue;
                if (Zoo[nx][ny] != 0 || visit[nx][ny][k + 1]) continue;
                visit[nx][ny][k + 1] = true;
                q.push({ {nx,ny},{cnt + 1, k + 1} });
            }
        }

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dxy[i][0];
            int ny = y + dxy[i][1];
            if (nx < 0 || ny < 0 || nx >= H || ny >= W) continue;
            if (Zoo[nx][ny] != 0 || visit[nx][ny][k]) continue;
            visit[nx][ny][k] = true;
            q.push({ {nx,ny},{cnt + 1, k } });
        }
    }
    cout << -1;
}

void Answer()
{
    cin >> K >> W >> H;
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cin >> Zoo[i][j];
        }
    }
    BFS();
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}