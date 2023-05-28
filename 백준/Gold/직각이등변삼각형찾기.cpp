#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <set>
#include <cstring>

#define endl "\n"

#define ft first
#define sd second
using namespace std;

using pii = pair<int, int>;

int n = 10;
int p[11][11], d[11][11];

bool isValid(int x, int y) {
	return 0 <= x && x < n && 0 <= y && y < n;
}

bool chk() {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (p[i][j] != d[i][j]) return false;
		}
	}
	return true;
}

bool go0(int x, int y, int l) {
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < i + 1; j++) {
			int nx = i + x, ny = j + y;
			if (!isValid(nx, ny)) return false;
			d[nx][ny] = 1;
		}
	}

	return true;
}

bool go1(int x, int y, int l) {
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < l - i; j++) {
			int nx = i + x, ny = j + y;
			if (!isValid(nx, ny)) return false;
			d[nx][ny] = 1;
		}
	}

	return true;
}

bool go2(int x, int y, int l) {
	for (int i = 0; i < l; i++) {
		for (int j = 0; j > i - l; j--) {
			int nx = i + x, ny = j + y;
			if (!isValid(nx, ny)) return false;
			d[nx][ny] = 1;
		}
	}

	return true;
}

bool go3(int x, int y, int l) {
	for (int i = 0; i < l; i++) {
		for (int j = 0; j > -(i + 1); j--) {
			int nx = i + x, ny = j + y;
			if (!isValid(nx, ny)) return false;
			d[nx][ny] = 1;
		}
	}

	return true;
}

bool go4(int x, int y, int l) {
	return l & 1 && go0(x - l / 2, y, l / 2 + 1) && go1(x, y, l / 2 + 1);
}

bool go5(int x, int y, int l) {
	return l & 1 && go1(x, y, l / 2 + 1) && go2(x, y, l / 2 + 1);
}

bool go6(int x, int y, int l) {
	return l & 1 && go3(x - l / 2, y, l / 2) && go2(x, y, l / 2 + 1);
}

bool go7(int x, int y, int l) {
	return l & 1 && go0(x, y, l / 2 + 1) && go3(x, y, l / 2 + 1);
}

bool (*go[10])(int, int, int) = { go0, go1, go2, go3, go4, go5, go6, go7 };

vector<pii> getAns(int k, int x, int y, int l) {
	vector<pii> ans;
	if (k == 0) ans = { {x, y}, {x + l - 1, y}, {x + l - 1, y + l - 1} };
	else if (k == 1) ans = { {x, y}, {x, y + l - 1}, {x + l - 1, y} };
	else if (k == 2) ans = { {x, y}, {x + l - 1, y}, {x, y - (l - 1)} };
	else if (k == 3) ans = { {x, y}, {x + l - 1, y}, {x + l - 1, y - (l - 1)} };
	else if (k == 4) ans = { {x - l / 2, y}, {x + l / 2, y}, {x, y + l / 2} };
	else if (k == 5) ans = { {x, y + l / 2}, {x, y - l / 2}, {x + l / 2, y} };
	else if (k == 6) ans = { {x - l / 2, y}, {x + l / 2, y}, {x, y - l / 2} };
	else if (k == 7) ans = { {x, y}, {x + l / 2, y + l / 2}, {x + l / 2, y - l / 2} };
	sort(ans.begin(), ans.end());
	return ans;
}


void Answer()
{
	char c;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> c;
			p[i][j] = c - '0';
		}
	}

	for (int k = 0; k < 8; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				for (int l = 2; l < n + 1; l++) {
					memset(d, 0, sizeof(d));
					if (go[k](i, j, l) && chk()) {
						for (pii x : getAns(k, i + 1, j + 1, l)) {
							printf("%d %d\n", x.ft, x.sd);
						}
						return ;
					}
				}
			}
		}
	}

	cout << 0;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
}