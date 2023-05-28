#include<iostream>
#include<vector>
#include<algorithm>

#define endl "\n"
using namespace std;

bool Compare(pair<long long, long long> a, pair<long long, long long> b)
{
	if (a.second == b.second)
	{
		if (a.first < b.first)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (a.second < b.second)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Answer()
{
	long long N, x, y , answer = 0;
	cin >> N;
	vector<pair<long long, long long>> arrow;
	arrow.push_back({ 0,0 });
	for (int i = 0; i < N; i++)
	{
		cin >> x >> y;
		arrow.push_back({ x, y });
	}
	sort(arrow.begin(), arrow.end(), Compare);
	arrow.push_back({ 0,0 });
	for (int i = 1; i <= N; i++)
	{
		if (arrow[i].second == arrow[i - 1].second &&
			arrow[i].second == arrow[i + 1].second)
		{
			answer += min(arrow[i].first - arrow[i - 1].first,
				arrow[i + 1].first - arrow[i].first);
		}
		else if (arrow[i].second == arrow[i - 1].second)
		{
			answer += arrow[i].first - arrow[i - 1].first;
		}
		else if (arrow[i].second == arrow[i + 1].second)
		{
			answer += arrow[i + 1].first - arrow[i].first;
		}
	}
	cout << answer;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}