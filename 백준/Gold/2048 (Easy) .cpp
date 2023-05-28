#include <iostream>
#include <vector>
#include <queue>
#include <string>

#define endl "\n"
using namespace std;

int n;
int board[21][21];
int mxN = 0;


void shift(int num) {
	queue<int> q;

	switch (num) {
		// left
	case 0:
		for (int i = 1; i <= n; ++i) {
			for (int j = 1; j <= n; ++j) {
				if (board[i][j] != 0) {
					q.push(board[i][j]);
				}
				board[i][j] = 0;
			}
			int idx = 1;

			while (!q.empty()) {
				int data = q.front();
				q.pop();

				if (board[i][idx] == 0) {
					board[i][idx] = data;
				}
				else if (board[i][idx] == data) {
					board[i][idx] *= 2;
					idx++;
				}
				else {
					idx++;
					board[i][idx] = data;
				}
			}
		}
		break;

		// right
	case 1:
		for (int i = 1; i <= n; ++i) {
			for (int j = n; j >= 1; --j) {
				if (board[i][j] != 0) {
					q.push(board[i][j]);
				}
				board[i][j] = 0;
			}
			int idx = n;

			while (!q.empty()) {
				int data = q.front();
				q.pop();

				if (board[i][idx] == 0) {
					board[i][idx] = data;
				}
				else if (board[i][idx] == data) {
					board[i][idx] *= 2;
					idx--;
				}
				else {
					idx--;
					board[i][idx] = data;
				}
			}
		}
		break;

		// up
	case 2:
		for (int j = 1; j <= n; ++j) {
			for (int i = 1; i <= n; ++i) {
				if (board[i][j] != 0) {
					q.push(board[i][j]);
				}
				board[i][j] = 0;
			}
			int idx = 1;

			while (!q.empty()) {
				int data = q.front();
				q.pop();

				if (board[idx][j] == 0) {
					board[idx][j] = data;
				}
				else if (board[idx][j] == data) {
					board[idx][j] *= 2;
					idx++;
				}
				else {
					idx++;
					board[idx][j] = data;
				}
			}
		}
		break;

		// down
	case 3:
		for (int j = 1; j <= n; ++j) {
			for (int i = n; i >= 1; --i) {
				if (board[i][j] != 0) {
					q.push(board[i][j]);
				}
				board[i][j] = 0;
			}
			int idx = n;

			while (!q.empty()) {
				int data = q.front();
				q.pop();

				if (board[idx][j] == 0) {
					board[idx][j] = data;
				}
				else if (board[idx][j] == data) {
					board[idx][j] *= 2;
					idx--;
				}
				else {
					idx--;
					board[idx][j] = data;
				}
			}
		}
	}
}

void dfs(int depth) {
	if (depth == 5) {

		return;
	}

	int newBoard[21][21];
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			newBoard[i][j] = board[i][j];
		}
	}

	for (int i = 0; i < 4; ++i) {
		shift(i);
		for (int i = 1; i <= n; ++i) {
			for (int j = 1; j <= n; ++j) {
				if (board[i][j] > mxN) {
					mxN = board[i][j];
				}
			}
		}

		dfs(depth + 1);

		for (int j = 1; j <= n; ++j) {
			for (int k = 1; k <= n; ++k) {
				board[j][k] = newBoard[j][k];
			}
		}
	}


}


void Answer()
{
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			cin >> board[i][j];
		}
	}


	dfs(0);

	cout << mxN;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
}
