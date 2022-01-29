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
	vector<int> answer;
	while (N--)
	{
		cin >> A;
		for (char a : A)
		{
			if (answer.empty() || a == '(')
				answer.push_back(a);
			else if (answer.back() == '(')
				answer.pop_back();
		}
		if (answer.empty())
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
		answer.clear();
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