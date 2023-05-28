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

#define MAX 50
#define INF 2500000000

int n, m, s, e;

int earn[MAX];
bool visit[MAX] = { false, };
vector<long long> dist(MAX, INF);
vector<pair<int, int> > map[MAX];
queue<int> cycleNode;

bool BFS()  // cycleNode �߿��� ������������ ��ΰ� �����ϴ��� �Ǵ�
{
    while (!cycleNode.empty()) {
        int cur = cycleNode.front(); cycleNode.pop();

        for (auto x : map[cur]) {
            int next = x.first;
            if (visit[next]) continue;
            visit[next] = true;
            cycleNode.push(next);
        }
    }
    if (visit[e]) return true; // BFS ������ �������� �湮 ǥ�ð� �ȴٸ� cycle�� ����ϴ� ��ΰ� �����ϴ°��� -> Gee
    return false;
}

void Answer()
{
    cin >> n >> s >> e >> m;

    for (int i = 0; i < m; ++i) {
        int u, v, w; cin >> u >> v >> w;
        map[u].push_back({ v, w });
    }
    for (int i = 0; i < n; ++i) {
        cin >> earn[i];
    }

    dist[s] = -earn[s];
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < n; ++j) { // ���� �ϳ� ����
            for (auto cur : map[j]) { // ���õ� ������ ����� ��� ����
                int next = cur.first;
                long long nextCost = cur.second;
                if (dist[j] != INF && dist[next] > dist[j] + nextCost - earn[next]) { // ���õ� ������ ���Ѵ밡 �ƴϾ�� ��.
                    dist[next] = dist[j] + nextCost - earn[next];
                    if (i == n) { // v-1�� ������ v��°��� ���� if���� ���Դٴ� ���� ��尡 ������Ʈ ���� �ǹ�. �׷��Ƿ� cycleNode
                        visit[j] = true; cycleNode.push(j); // cycleNode���� �湮 ǥ��
                    }
                }
            }
        }
    }

    if (dist[e] == INF) cout << "gg" << endl; // ������ �� ����. (������ �� �Ǿ� ����)
    else {
        if (BFS()) cout << "Gee" << endl; // �����ߴµ� ���� �� ���Ѵ� : ���� ����Ŭ�� ����ؼ� ��������.
        else cout << -dist[e] << endl; // ���� �� : earn�� -�� ǥ���ؼ� �ǹ̻��� ��������� Bellman-Ford���� ������.
    }
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}