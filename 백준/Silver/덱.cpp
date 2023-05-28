#include<iostream>
#include<deque>
#include<string>

#define endl "\n"
using namespace std;

void Answer()
{
	string A;
	deque<int> answer;
	int N, B;
	cin >> N;
	while (N--)
	{
		cin >> A;
		if (A.compare("push_back") == 0)
		{
			cin >> B;
			answer.push_back(B);
		}
		else if (A.compare("push_front") == 0)
		{
			cin >> B;
			answer.push_front(B);
		}
		else if (A.compare("pop_back") == 0)
		{
			if (answer.empty())
				cout << "-1" << endl;
			else
			{
				cout << answer.back() << endl;
				answer.pop_back();
			}
		}
		else if (A.compare("pop_front") == 0)
		{
			if (answer.empty())
				cout << "-1" << endl;
			else
			{
				cout << answer.front() << endl;
				answer.pop_front();
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