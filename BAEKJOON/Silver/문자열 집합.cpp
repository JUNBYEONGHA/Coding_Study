#include<iostream>
#include<set>
#define endl "\n"
using namespace std;

void Answer()
{
	set<string> S;
	int N , M , answer = 0;
	cin >> N >> M;
	string K;
	for (int i = 0; i < N; i++)
	{
		cin >> K;
		S.insert(K);
	}
	for (int i = 0; i < M; i++)
	{
		cin >> K;
		if (!(S.find(K) == S.end()))
			answer++;
	}
	cout << answer;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}