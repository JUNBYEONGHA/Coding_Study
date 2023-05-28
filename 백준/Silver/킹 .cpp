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

int map[8][8];
// r, l, b, t, rt, lt, rb, lb
int dx[8] = { 0, 0, +1, -1, -1, -1, +1, +1 };
int dy[8] = { +1, -1, 0, 0, +1, -1, +1, -1 };
char inputKy, inputSy;
int inputKx, inputSx, n;
vector<string> moves;

void Answer()
{
	cin >> inputKy >> inputKx >> inputSy >> inputSx >> n;
	int kx = 8 - inputKx; int ky = inputKy - 'A';
	int sx = 8 - inputSx; int sy = inputSy - 'A';

	for (int i = 0; i < n; i++) {
		string str; cin >> str;
		moves.push_back(str);
	}
	//�̵���Ű��
	for (int m = 0; m < n; m++) {
		string move = moves[m];
		int i = 0;
		if (move == "R") {

		}
		else if (move == "L") {
			i += 1;
		}
		else if (move == "B") {
			i += 2;
		}
		else if (move == "T") {
			i += 3;
		}
		else if (move == "RT") {
			i += 4;
		}
		else if (move == "LT") {
			i += 5;
		}
		else if (move == "RB") {
			i += 6;
		}
		else {
			i += 7;
		}
		int nx = kx + dx[i];
		int ny = ky + dy[i];

		//king�� �Űܺ����� �� �ű� ��Ȳ�̸� �ǳʶٱ�
		if (nx < 0 || nx > 7 || ny < 0 || ny > 7) {
			continue;
		}
		//king�� �ű� �� ���ϱ� ���̶� ���� �ִٸ�?
		if (nx == sx && ny == sy) {
			int nsx = sx + dx[i];
			int nsy = sy + dy[i];
			//���� �Ű���� ������ �����ٸ� �ǳʶٱ�
			if (nsx < 0 || nsx >7 || nsy < 0 || nsy >7) {
				continue;
			}
			else {
				//�� �ű��
				sx = nsx; sy = nsy;
			}
		}
		//king�� �� ��� �ǳʶپ����� �ʾҴٸ� king �ű��
		kx = nx; ky = ny;
	}
	cout <<  (char)('A' + ky) << 8 - kx << endl;
	cout <<  (char)('A' + sy) << 8 - sx;
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}