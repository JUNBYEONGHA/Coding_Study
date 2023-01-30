#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

#define endl "\n"
using namespace std;

int city[51][51];
int N, M, chickencount, result = 10000000000;
vector<pair<int,int>> home , chicken , v;
bool visit[15];

int getDistance()
{
	int sum = 0;
	for (int i = 0; i < home.size(); i++)
	{
		int x = home[i].first;
		int y = home[i].second;
		int d = 10000000000;
		for (int j = 0; j < v.size(); j++)
		{
			int nx = v[j].first;
			int ny = v[j].second;
			int dist = abs(nx - x) + abs(ny - y);
			
			d = min(d, dist);
		}
		sum += d;
	}
	return sum;
}
void selectChicken(int index, int cnt)
{
	if (cnt == M)
	{
		result = min(result, getDistance());
		return;
	}
	for (int i = index; i < chickencount; i++)
	{
		if (visit[i] == true) continue;
		visit[i] = true;
		v.push_back(chicken[i]);
		selectChicken(i, cnt + 1);
		visit[i] = false;
		v.pop_back();
	}
}

void Answer()
{
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> city[i][j];
			if (city[i][j] == 1)
			{
				home.push_back({ i,j });
			}
			else if (city[i][j] == 2)
			{
				chicken.push_back({ i,j });
			}
		}
	}
	chickencount = chicken.size();

	selectChicken(0, 0);
	cout << result << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}