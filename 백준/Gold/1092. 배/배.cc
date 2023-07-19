#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <deque>
#include <queue>
#include <stack>
#include <cstring>
#include <sstream>
#include <set>
#include <map>
#include <climits>

#define endl "\n"
using LL = long long;
using namespace std;

void Answer()
{
	int N; cin >> N;
	vector<int>crain(N);
	for (int i = 0; i < N; i++)
	{
		cin >> crain[i];
	}
	int M; cin >> M;
	vector<int>boart(M);
	for (int i = 0; i < M; i++)
	{
		cin >> boart[i];
	}
	sort(crain.begin(), crain.end());
	sort(boart.begin(), boart.end());
	int mintime = 0;
	if (crain.back() < boart.back())
	{
		cout << -1;
		return;
	}

	while (!boart.empty())
	{
		for (int i = crain.size() - 1; i >= 0; i--)
		{
			for (int j = boart.size() - 1; j >= 0; j--)
			{
				if (crain[i] >= boart[j])
				{
					boart.erase(boart.begin() + j);
					break;
				}
			}
		}
		mintime++;
	}
	cout << mintime;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}