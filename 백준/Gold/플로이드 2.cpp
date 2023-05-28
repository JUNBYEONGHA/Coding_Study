#include<iostream>
#include<vector>
#include<cmath>
#include<cstring>
#include<queue>
#include<algorithm>
#include<limits>
#define endl "\n"
using namespace std;

#define INF 100001
int n, m, u, v, cost;
int map[101][101];
int route[101][101];
vector<int> path;

void pathfind(int start, int end)
{
	int stopover = route[start][end];

	while (stopover != 0)
	{
		path.push_back(stopover);
		stopover = route[start][stopover];
	}
}

void Answer()
{
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (i != j)
                map[i][j] = INF;

    while (m--)
    {
        cin >> u >> v >> cost;
        map[u][v] = min(map[u][v], cost);
        route[u][v] = u;
    }

    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                if (map[i][j] > map[i][k] + map[k][j])
                {
                    map[i][j] = map[i][k] + map[k][j];
                    route[i][j] = route[k][j];
                }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            if (map[i][j] <= 100000)
                cout << map[i][j] << " ";
            else
                cout << "0 ";
        cout << '\n';
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j) cout << 0 << '\n';
            else
            {
                pathfind(i, j);
                if (path.empty() && map[i][j] > 100000) {
                    cout << 0;
                }
                else {
                    cout << path.size() + 1 << " ";
                    for (int i = 0; i < path.size(); i++) 
                        cout << path[path.size() - i - 1] << " ";
                    cout << j << " "; 
                }
                cout << '\n';
            }
            path.clear();
        }
    }
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}