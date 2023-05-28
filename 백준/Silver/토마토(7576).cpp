#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>

#define endl "\n"
using namespace std;

#define MAX 1001

typedef struct {
	int x, y;
	int cnt;
} types;

int M, N, H; //가로 세로 높이
int box[MAX][MAX];
bool visited[MAX][MAX];
int moveX[4] = { 1, -1, 0, 0 };
int moveY[4] = { 0, 0, 1, -1 };
queue<types> bfs;
void Input()
{
	int cnt = 0;

	cin >> M >> N ;
		for (int i = 0; i < N; i++)
			for (int j = 0; j < M; j++) {
				cin >> box[i][j];
				if (box[i][j] == 1) {
					bfs.push({ i, j, 0 });
					visited[i][j] = true;
				}
				else if (box[i][j] == -1)
					visited[i][j] = true;
			}
	if (bfs.empty()) {
		cout << "-1";
		return;
	}

	while (!bfs.empty()) {
		auto a = bfs.front();
		bfs.pop();
		cnt = max(cnt, a.cnt);

		for (int i = 0; i < 4; i++) {
			int nx = a.x + moveX[i];
			int ny = a.y + moveY[i];

			if (nx >= 0 && ny >= 0  && nx < N && ny < M && !visited[nx][ny]) {
				bfs.push({ nx, ny, a.cnt + 1 });
				visited[nx][ny] = true;
			}
		}
	}

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
				if (!visited[i][j]) {
					cout << "-1" ;
					return;
				}

	cout << cnt;
	return;

}

void Answer()
{
	Input();
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Answer();

	return 0;
}