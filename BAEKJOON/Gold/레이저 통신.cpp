#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>

#define endl "\n"
using namespace std;
int y_ar[4] = { 0,0,1,-1 };
int x_ar[4] = { 1,-1,0,0 };
char arr[100][100];

vector <pair<int, int>> laser;
int visited[100][100] = { 0, };
int w, h;

int val, temp;

void bfs() {
	queue <pair<pair<int, int>, pair<int, int>>> que; //좌표, 거울 갯수, 방향순으로 넣을거
	que.push(make_pair(make_pair(laser[0].first, laser[0].second), make_pair(0, -1)));
	while (!que.empty()) {
		int y = que.front().first.first;
		int x = que.front().first.second;
		int mirror = que.front().second.first;
		int dir = que.front().second.second;
		que.pop();
		int temp;
		for (int i = 0; i < 4; i++) {
			int ny = y + y_ar[i];
			int nx = x + x_ar[i];
			if (ny < 0 || ny >= h || nx < 0 || nx >= w || arr[ny][nx] == '*')
				continue;
			temp = mirror;
			if (dir != i)
				temp++;
			if (visited[ny][nx] >= temp) {
				visited[ny][nx] = temp;
				que.push(make_pair(make_pair(ny, nx), make_pair(temp, i)));
			}
		}
	}
}

void Answer()
{
	cin >> w >> h;
	for (int i = 0; i < h; i++) {
		cin >> arr[i];
		for (int j = 0; j < w; j++) {
			if (arr[i][j] == 'C')
				arr[i][j] = '.', laser.push_back(make_pair(i, j));
			visited[i][j] = 1000000000;
		}
	}
	bfs();
	cout << visited[laser[1].first][laser[1].second] - 1 << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}