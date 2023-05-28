#include<iostream>
#include<vector>
#define endl "\n"
using namespace std;

int parent[51];
vector<int> truth;
vector<int> people[51];
int answer;

int find(int x)
{
	if (parent[x] == x) return x;
	else return find(parent[x]);
}
void Union(int x, int y)
{
	x = find(x);
	y = find(y);
	if (x == y) return;
	parent[y] = x;
}
bool isUnion(int x, int y)
{
	x = find(x);
	y = find(y);
	if (x == y) return true;
	else return false;
}


void Answer()
{
	int N, M;
	cin >> N >> M;
	int a, b;
	cin >> a;
	answer = M;
	for (int i = 0; i < a; i++)
	{
		cin >> b;
		truth.push_back(b);
	}
	for (int i = 0; i < M; i++)
	{
		cin >> a;
		for (int j = 0; j < a; j++)
		{
			cin >> b;
			people[i].push_back(b);
		}
	}
	for (int i = 1; i <= N; i++)
	{
		parent[i] = i;
	}
	for (int i = 0; i < M; i++)
	{
		a = people[i][0];
		for (int j = 1; j < people[i].size(); j++)
		{
			b = people[i][j];
			Union(a, b);
		}
	}
	for (int i = 0; i < M; i++)
	{
		bool check = true;
		for (int j = 0; j < people[i].size(); j++)
		{
			if (!check) break;
			a = people[i][j];
			for (int k = 0; k < truth.size() ; k++)
			{
				b = truth[k];
				if (isUnion(a, b))
				{
					check = false;
					break;
				}
			}
		}
		if (!check) answer--;
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