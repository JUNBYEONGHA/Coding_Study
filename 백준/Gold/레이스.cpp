#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#define endl "\n"
using namespace std;

int N, M, K;
int positions[50];

void Answer()
{
	int i;
	cin >> N >> M >> K;
	for (i = 0; i < K; i++) cin >> positions[i];

	string res;

	int start = 0;
	int end = N;

	while (start <= end) {
		int mid = (start + end) / 2;

		string cur = "1";
		int selected = 1;
		int prev = 0;

		int i;
		for (i = 1; i < K; i++) {
			if (positions[i] - positions[prev] >= mid) {
				cur += "1";
				selected++;
				prev = i;

				if (selected == M) break;
			}
			else {
				cur += "0";
			}
		}

		while (cur.size() < K) cur += "0";

		if (selected == M) {
			start = mid + 1;
			res = cur;
		}
		else {
			end = mid - 1;
		}
	}

	cout << res;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}