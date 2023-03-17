#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <map>
#include <deque>
#include <queue>

#define endl "\n"
using LL = long long;
using namespace std;

void Answer()
{
	int N, score, P;
	int rank[100];
	cin >> N >> score >> P;

	for (int i = 0; i < N; i++) {
		cin >> rank[i];
	}
	int cnt = 0;
	int my_rank = 1;
	for (int i = 0; i < N; i++) {
		if (score < rank[i]) my_rank += 1;
		else if (score == rank[i]) my_rank = my_rank;
		else break;
		cnt++;
	}

	if (cnt == P) my_rank = -1;
	if (N == 0) my_rank = 1;

	cout << my_rank;

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}