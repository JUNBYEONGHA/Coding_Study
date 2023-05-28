#include<iostream>
#include<vector>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int N;
	cin >> N;
	vector<int> answer(N);
	for (int i = 0; i < N; i++)
	{
		cin >> answer[i];
	}
	sort(answer.begin(), answer.end());
	reverse(answer.begin(), answer.end());
	for (int i = 0; i < N; i++)
	{
		cout << answer[i] << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}