#include<iostream>
#include<vector>
#define endl "\n"
using namespace std;

long long arr[10000001];

void Answer()
{
	int N, M;
	cin >> N >> M;
	vector<long long> varr(M, 0);
	long long result = 0;
	for (int i = 1; i <= N; i++)
	{
		int num;
		cin >> num;
		arr[i] = (arr[i - 1] + num) % M;
		if (!arr[i])
			result++;
		varr[arr[i]]++;
	}
	for (int i = 0; i < M; i++)
	{
		result += varr[i] * (varr[i] - 1) / 2;
	}
	cout << result;

}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}