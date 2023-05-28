#include<iostream>
#include<vector>
#include<map>
#include<queue>
#include<cstring>
#include<algorithm>
#define endl "\n"
using namespace std;

#define MAX 1001
int N, M;
int inDegree[MAX];
vector<int> result;
vector<int> arr[MAX];

void topologySort()
{
	queue<int> q;
	for (int i = 1; i <= N ; i++)
	{
		if (inDegree[i] == 0)
		{
			q.push(i);
		}
	}
	while (!q.empty())
	{
		int x = q.front();
		q.pop();
		result.push_back(x);
		for (int i = 0; i < arr[x].size(); i++)
		{
			int y = arr[x][i];
			if (--inDegree[y] == 0)
			{
				q.push(y);
			}
		}
	}
}

void Answer()
{
	cin >> N >> M;
	for (int i = 0; i < M; i++)
	{
		int a, b ,c;
		cin >> a;
		cin >> b;
		for (int j = 0; j < a - 1; j++)
		{
			cin >> c;
			arr[b].push_back(c);
			inDegree[c]++;
			b = c;
		}
	}
	topologySort();
	if (result.size() != N)
	{
		cout << 0;
	}
	else
	{ 
		for (int i = 0; i < result.size(); i++)
		{
			cout << result[i] << endl;
		
		}	
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}