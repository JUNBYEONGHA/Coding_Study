#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

#define endl "\n"
using namespace std;

int N;
long long M;
long long trees[1000001];
bool isPossible(unsigned int height) {
	unsigned int taken = 0;
	for (int i = 0; i < N; i++) {
		if (trees[i] >= height)
			taken += (trees[i] - height);
		if (taken >= M) return true;
	}
	return false;
}

void Answer()
{
	cin >> N >> M;
	for (int i = 0; i < N; i++)
		cin >> trees[i];

	unsigned int left = 0, right = 1000000000;
	unsigned int mid, ret;
	while (left <= right) {
		mid = (left + right) / 2;
		if (isPossible(mid)) {
			ret = mid;
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	cout << ret << endl;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}