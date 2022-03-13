#include<iostream>
#include<queue>

#define endl "\n"
using namespace std;

void Answer()
{
	int time , N;
	cin >> time;
	string order;
	queue<int> answer;
	while (time--)
	{
		cin >> order;
		if (order == "push")
		{
			cin >> N;
			answer.push(N);
		}
		else if (order == "pop")
		{
			if (!answer.empty())
			{
				cout << answer.front() << endl;
				answer.pop();
			}
			else
			{
				cout << -1 << endl;
			}
		}
		else if (order == "size")
		{
			cout << answer.size() << endl;
		}
		else if (order == "empty")
		{
			cout << answer.empty() << endl;
		}
		else if (order == "front")
		{
			if (!answer.empty())
				cout << answer.front() << endl;
			else
				cout << -1 << endl;
		}
		else if (order == "back")
		{
			if (!answer.empty())
				cout << answer.back() << endl;
			else
				cout << -1 << endl;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}