#include<iostream>
#include<deque>
#include<string>

#define endl "\n"
using namespace std;

void Answer()
{
	int A, B ,C ,count = 0;
	deque<int> answer;
	cin >> A >> B;
	for (int i = 1; i <= A; i++)
	{
		answer.push_back(i);
	}
	while (B--)
	{
		cin >> C;
		int left, right;
		for (int i = 0; i < answer.size(); i++)
		{
			if (answer[i] == C)
			{
				left = i;
				right = answer.size() - i;
			}
		}
		while (true)
		{
			if (answer.front() == C)
			{
				answer.pop_front();
				break;
			}
			else if (left <= right)
			{
				answer.push_back(answer.front());
				answer.pop_front();
				count++;
			}
			else
			{
				answer.push_front(answer.back());
				answer.pop_back();
				count++;
			}
		}
	}
	cout << count;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}