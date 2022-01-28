#include<iostream>
#include<vector>
#include<algorithm>

#define endl "\n"
using namespace std;

int num;
vector<pair<int, int>> meet;
void Input()
{
	cin >> num;
	int A, B;
	for (int i = 0; i < num; i++)
	{
		cin >> A >> B;
		meet.push_back(make_pair(B, A));
	}
}
void Solution()
{
	sort(meet.begin(), meet.end());
	int result = 0 ,savetime = 0;
	for (int i = 0; i < num ; i++)
	{
		if (savetime <= meet[i].second)
		{
			savetime = meet[i].first;
			result++;
		}
	}
	cout << result << endl;
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