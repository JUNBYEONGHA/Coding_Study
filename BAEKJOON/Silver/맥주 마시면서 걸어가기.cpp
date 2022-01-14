#include<iostream>
#include<queue>
#include<vector>
#include<cstring>

#define endl "\n"
using namespace std;

#define MAX 310

vector<pair<int, int>> map;
vector<bool>visit;
pair<int, int> goal;
int sx, sy;
int n;

void BFS()
{
	queue<pair<int, int>>q;
	q.push({ sx,sy });
	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		if (abs(x - goal.first) + abs(y - goal.second) <= 1000) {
			cout << "happy";
			return;
		}
		else
		{
			for (int i = 0; i < map.size(); i++)
			{
				if (abs(x - map[i].first) + abs(y - map[i].second) <= 1000) 
				{
					if (!visit[i])
					{
						visit[i] = true;
						q.push({ map[i].first , map[i].second });
					}
				}
			}
		}
	}
	cout << "sad";
}

void Input()
{
	int num;
	cin >> num;
	while (num--)
	{
		cin >> n;
		cin >> sx >> sy;
		int a, b;
		map.clear();
		visit.clear();

		for (int i = 0; i < n; i++)
		{
			cin >> a >> b;
			map.push_back(make_pair(a, b));
			visit.push_back(false);
		}
		cin >> goal.first >> goal.second;
		BFS();
		cout << endl;
	}
}
void Answer()
{
	Input();
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}