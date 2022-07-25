#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>
#include<cstring>
#include<queue>
#define endl "\n"
using namespace std;

void Answer()
{
	queue<int> q;
	int N , K;
	cin >> N >> K;
	for (int i = 1; i <= N; i++)
	{
		q.push(i);
	}
	cout << "<";
	while (!q.empty())
	{
		for (int i = 0; i < K - 1; i++)
		{
			q.push(q.front());
			q.pop();
		}
		if (q.size() == 1)
		{
			cout << q.front() << ">";
			q.pop();
		}
		else
		{
			cout << q.front() << ", ";
			q.pop();
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}