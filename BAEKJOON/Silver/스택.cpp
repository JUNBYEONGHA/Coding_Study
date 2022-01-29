#include<iostream>
#include<vector>

#define endl "\n"
using namespace std;
int N;
void Input()
{
	cin >> N;
}
void Solution()
{
	string A;
	int B;
	vector<int> answer;
	while (N--)
	{
		cin >> A;
		if (A.compare("push") == 0)
		{
			cin >> B;
			answer.push_back(B);
		}
		else if (A.compare("pop") == 0)
		{
			if (answer.empty())
				cout << "-1" << endl;
			else
			{
				cout << answer.back() << endl;
				answer.pop_back();
			}
		}
		else if (A.compare("top") == 0)
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
void Answer()
{
	Input();
	Solution();
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}