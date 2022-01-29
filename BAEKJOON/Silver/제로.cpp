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
	int A;
	vector<int> answer;
	while (N--)
	{
		cin >> A;
		if (A == 0)
		{
			if (!answer.empty())
				answer.pop_back();
		}
		else
		{
			answer.push_back(A);
		}
	}
	int result = 0;
	for (int a : answer)
	{
		result += a;
	}
	cout << result;
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