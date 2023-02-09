#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstring>

#define endl "\n"
using namespace std;

int R, C;
char graph[100][100];
bool visited[100][100];
int dir[4][2] = { {1,0},{0,1},{-1,0},{0,-1} };
int result, cheesetime;

bool bfs() {
	visited[0][0] = true;
	int cnt = 0;
	queue<pair<int, int>> q;
	q.push({ 0,0 });
	cheesetime++;
	while (!q.empty()) {
		int r = q.front().first;
		int c = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nr = r + dir[i][0];
			int nc = c + dir[i][1];
			if (nr >= 0 && nr < R && nc >= 0 && nc < C && !visited[nr][nc]) {
				if (graph[nr][nc] == '0') {
					q.push({ nr,nc });
				}
				else {
					graph[nr][nc] = '0';
					cnt++;
				}
				visited[nr][nc] = true;
			}
		}
	}

	//치즈가 없다면 시간과, 이전 bfs에서 나온 치즈의 개수를 출력한 후 false반환
	if (cnt == 0) {
		cout << --cheesetime << '\n' << result;
		return true;
	}
	//치즈가 있다면 결과(치즈의 개수) 갱신
	else {
		result = cnt;
		return false;
	}
}

void Answer()
{
	cin >> R >> C;
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			cin >> graph[i][j];
		}
	}
	//치즈가 없을 때까지
	while (true) {
		if (bfs())
			break;
		memset(visited, false, sizeof(visited));
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}