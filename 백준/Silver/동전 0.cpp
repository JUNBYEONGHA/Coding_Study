#include<iostream>
#include<vector>
#include<algorithm>

#define endl "\n"
using namespace std;

vector<int> coin;
int num , target;

void Input()
{
	cin >> num >> target;
	int A;
	for (int i = 0; i < num; i++)
	{
		cin >> A;
		coin.push_back(A);
	}
}
void Solution()
{
	int answer = 0;
	for (int i = num - 1; i > -1 ; i--)
	{
		if (target == 0) break;
		if (target - coin[i] >= 0)
		{
			answer += target / coin[i];
			target %= coin[i];
		}
	}
	cout << answer;
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