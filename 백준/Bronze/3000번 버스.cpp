#include<iostream>
#include<vector>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int N, K;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int tmp;
		cin >> tmp;
		int cnt = 1;
		int pre = 1;
		for (int j = 1; j < tmp; j++) {
			cnt += (pre * 2);
			pre = pre * 2;
		}

		cout << cnt << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}