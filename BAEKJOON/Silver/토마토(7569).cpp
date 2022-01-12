#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>

#define endl "\n"
using namespace std;

#define MAX 101

typedef struct {
	int x, y, z;
	int cnt;
} types;

int M, N, H; //가로 세로 높이
int box[101][101][101];
bool visited[101][101][101];
int moveX[6] = { 1, -1, 0, 0, 0, 0 };
int moveY[6] = { 0, 0, 1, -1, 0, 0 };
int moveZ[6] = { 0, 0, 0, 0, 1, -1 };
queue<types> bfs;
void Input()
{
	int cnt = 0;

	cin >> M >> N >> H;
	for (int k = 0; k < H; k++)
		for (int i = 0; i < N; i++)
			for (int j = 0; j < M; j++) {
				cin >> box[i][j][k];
				if (box[i][j][k] == 1) {
					bfs.push({ i, j, k, 0 });
					visited[i][j][k] = true;
				}
				else if (box[i][j][k] == -1)
					visited[i][j][k] = true;
			}
	if (bfs.empty()) {
		cout << "-1";
		return;
	}

	while (!bfs.empty()) {
		auto a = bfs.front();
		bfs.pop();
		cnt = max(cnt, a.cnt);

		for (int i = 0; i < 6; i++) {
			int nx = a.x + moveX[i];
			int ny = a.y + moveY[i];
			int nz = a.z + moveZ[i];

			if (nx >= 0 && ny >= 0 && nz >= 0 && nx < N && ny < M && nz < H && !visited[nx][ny][nz]) {
				bfs.push({ nx, ny, nz, a.cnt + 1 });
				visited[nx][ny][nz] = true;
			}
		}
	}

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			for (int k = 0; k < H; k++)
				if (!visited[i][j][k]) {
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