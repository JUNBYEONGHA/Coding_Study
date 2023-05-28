#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <map>

#define endl "\n"
using LL = long long;
using namespace std;

int cumulativesum[100001];

void Answer()
{
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> cumulativesum[i];
	}
	for (int i = 2; i <= N; i++)
	{
		cumulativesum[i] += cumulativesum[i - 1];
	}
	int M;
	cin >> M;
	for (int i = 0; i < M; i++)
	{
		int a, b; cin >> a >> b;
		cout << cumulativesum[b] - cumulativesum[a - 1] << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}