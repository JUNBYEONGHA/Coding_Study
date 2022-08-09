#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<algorithm>
#define endl "\n"
using namespace std;

vector<int> answer;

void Answer()
{	
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		answer.push_back(a);
	}
	sort(answer.begin(), answer.end(),greater<int>());
	cout << answer[k - 1];
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}