#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define endl "\n"
using namespace std;

int sensor[10001];
int dist[10001];
void Answer()
{
    int N, K;
    cin >> N >> K;

	for (int i = 0; i < N; i++) {
		cin >> sensor[i];
	}

	sort(sensor, sensor + N); // 기지국들의 위치 정렬

	for (int i = 0; i < N - 1; i++) {
		dist[i] = sensor[i + 1] - sensor[i];
	}

	sort(dist, dist + N - 1);

	int ans = 0;

	for (int i = 0; i < N - K; i++)
		ans += dist[i];

	cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    Answer();
}