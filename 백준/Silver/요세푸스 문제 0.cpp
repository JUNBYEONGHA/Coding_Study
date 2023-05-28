#include<iostream>
#include<queue>
#include<string>

#define endl "\n"
using namespace std;

void Answer()
{
	int N , K;
	cin >> N >> K;
	int add = 0;
	queue<int> q;
	for (int i = 1; i <= N; i++)
	{
		q.push(i);
	}
	cout << "<";
	while (q.size() > 1)
	{
		for (int i = 0; i < K - 1; i++)
		{
			q.push(q.front());
			q.pop();
		}
		cout << q.front() << ", ";
		q.pop();
	}
	cout << q.front() <<">";
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}