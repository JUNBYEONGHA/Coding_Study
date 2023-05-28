#include<iostream>
#include<queue>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>

#define endl "\n"
using namespace std;
vector<string> answer;

bool compare_string(const string& a, const string& b)
{
	if (a.size() == b.size())
		return a < b;
	return a.size() < b.size();
}

void Input()
{
	int num;
	cin >> num;
	while (num--)
	{
		string A;
		cin >> A;
		answer.push_back(A);
	}
}
void Solution()
{
	sort(answer.begin(), answer.end(),compare_string);
	answer.erase(unique(answer.begin(), answer.end()), answer.end());
	for (string c : answer)
	{
		cout << c << endl;
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