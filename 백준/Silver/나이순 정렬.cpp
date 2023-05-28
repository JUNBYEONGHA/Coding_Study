#include<iostream>
#include<queue>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>

#define endl "\n"
using namespace std;
vector<pair<int ,string>> answer;

bool compare_string(const pair<int, string>& a
	, const pair<int, string>& b)
{
	return a.first < b.first;
}

void Input()
{
	int num;
	cin >> num;
	while (num--)
	{
		int A;
		string B;
		cin >> A >> B;
		answer.push_back(make_pair(A, B));
	}
}
void Solution()
{
	sort(answer.begin(), answer.end(),compare_string);
	for (auto c : answer)
	{
		cout << c.first << " " << c.second << endl;
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