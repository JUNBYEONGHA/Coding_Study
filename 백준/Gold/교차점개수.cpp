#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

#define endl "\n"
using namespace std;

const int MAX_N = 51;
typedef pair<int, int> P;
typedef pair<pair<int, int>, pair<int, int> > PP;
int N;
PP point[MAX_N];

bool cw(P a, P b) {
    if (a.first < b.first) return false;
    if (a.first > b.first) return true;
    if (a.first < 3) return a.second > b.second;
    return a.second < b.second;
}

bool check(int a, int b) {
    P p1 = point[a].first;
    P p2 = point[a].second;
    P p3 = point[b].first;
    P p4 = point[b].second;
    bool c13 = cw(p1, p3);
    bool c23 = cw(p2, p3);
    bool c14 = cw(p1, p4);
    bool c24 = cw(p2, p4);
    return (c13 ^ c23) ^ (c14 ^ c24);
}

int convert(int a) {
    if (a == 3) return 1;
    if (a == 2) return 2;
    if (a == 1) return 4;
    return 3;
}


void Answer()
{
	cin >> N;
	N /= 2;
	for (int i = 0; i < N; i++) {
		int a1, b1, a2, b2;
		cin >> a1 >> b1;
		a1 = convert(a1);
		cin >> a2 >> b2;
		a2 = convert(a2);
		point[i] = make_pair(make_pair(a1, b1), make_pair(a2, b2));
	}

	int ret = 0, ans = 0;
	for (int i = 0; i < N; i++) {
		int tmp = 0;
		for (int j = 0; j < N; j++) {
			if (i == j) continue;
			if (check(i, j)) {
				tmp++;
			}
		}
		ret += tmp;
		ans = max(ans, tmp);
	}
	cout <<  ret / 2 << endl << ans;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}