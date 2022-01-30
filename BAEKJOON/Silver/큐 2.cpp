#include<iostream>
#include<queue>
#include<string>

#define endl "\n"
using namespace std;

void Answer()
{
	string A;
	queue<int> answer;
	int N ,B;
	cin >> N;
	while (N--)
	{
		cin >> A;
		if (A.compare("push") == 0)
		{
			cin >> B;
			answer.push(B);
		}
		else if (A.compare("pop") == 0)
		{
			if (answer.empty())
				cout << "-1" << endl;
			else
			{
				cout << answer.front() << endl;
				answer.pop();
			}
		}
		else if (A.compare("front") == 0)
		{
			if (answer.empty())
				cout << "-1" << endl;
			else
			{
				cout << answer.front() << endl;
			}
		}
		else if (A.compare("back") == 0)
		{
			if (answer.empty())
				cout << "-1" << endl;
			else
			{
				cout << answer.back() << endl;
			}
		}
		else if (A.compare("size") == 0)
		{
			cout << answer.size() << endl;
		}
		else
		{
			cout << answer.empty() << endl;
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}