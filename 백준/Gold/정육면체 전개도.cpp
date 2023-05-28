#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>
#include<cstring>
#define endl "\n"
using namespace std;

const vector<vector<string>> cubes = {
	{"0010", "1111", "0010"},
	{"0100", "1111", "1000"},
	{"0010", "1111", "0100"},
	{"0001", "1111", "1000"},
	{"0001", "1111", "0100"},
	{"11100", "00111"},
	{"1100", "0111", "0010"},
	{"1100", "0111", "0001"},
	{"0010", "1110", "0011"},
	{"0001", "1111", "0001"},
	{"1100", "0110", "0011"}
};
constexpr int T = 3, N = 6;
vector<vector<int>> a(N, vector<int>(N));

vector<string> mirror(const vector<string>& cube) {
	int row = cube.size(), col = cube[0].length();
	vector<string> ret(cube.size());
	for (int y = 0; y < row; ++y)
		for (int x = col - 1; x >= 0; --x)
			ret[y] += cube[y][x];
	return ret;
}

vector<string> rotate(const vector<string>& cube) {
	int row = cube[0].length(), col = cube.size();
	vector<string> ret(row);
	for (int y = 0; y < row; ++y)
		for (int x = col - 1; x >= 0; --x)
			ret[y] += cube[x][y];
	return ret;
}

bool check(const vector<string>& cube, int y, int x) {
	for (int i = 0; i < cube.size(); ++i)
		for (int j = 0; j < cube[0].length(); ++j) {
			int ny = y + i, nx = x + j;
			if (ny < 0 || ny >= N || nx < 0 || nx >= N) return false;
			if ((cube[i][j] - '0') != a[ny][nx]) return false;
		}
	return true;
}
void Answer()
{
	for (int i = 0; i < T; ++i) {
		for (int y = 0; y < N; ++y)
			for (int x = 0; x < N; ++x)
				cin >> a[y][x];
		bool ans = false;
		vector<string> cube;
		for (const auto& c : cubes) {
			cube = c;
			for (int mir = 0; mir < 2; ++mir) {
				for (int rot = 0; rot < 4; ++rot) {
					for (int y = 0; y < N; ++y)
						for (int x = 0; x < N; ++x)
							ans |= check(cube, y, x);
					cube = rotate(cube);
				}
				cube = mirror(cube);
			}
		}
		cout << (ans ? "yes" : "no") << '\n';
	}
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}