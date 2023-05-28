#include<iostream>
#include<queue>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>

#define endl "\n"
using namespace std;
vector<pair<int, int>> answer;

bool compar_A(const pair<int, int>& a, const pair<int, int>& b)
{
	if (a.second == b.second)
		return a.first < b.first;
	return a.second < b.second;
}
void Input()
{
	int num;
	cin >> num;
	while (num--)
	{
		int A, B;
		cin >> A >> B;
		answer.push_back(make_pair(A, B));
	}
}
void Solution()
{
	sort(answer.begin(), answer.end() ,compar_A);
	for (auto A : answer)
	{
		cout << A.first << " " << A.second << endl;
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