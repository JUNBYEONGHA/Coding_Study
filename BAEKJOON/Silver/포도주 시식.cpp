#include<iostream>
#include<vector>
#include<algorithm>

#define endl "\n"
using namespace std;

vector<int> Wine,D;
int N;

int DP()
{
	for (int i = 3; i < Wine.size(); i++)
	{
		D.push_back(max(max(D[i - 3] + Wine[i - 1] + Wine[i], D[i - 2] + Wine[i]), D[i - 1]));
	}
	return D[Wine.size() - 1];
}

void Input()
{
	cin >> N;
	for (int i = 0; i < 3; i++)
	{
		Wine.push_back(0);
		D.push_back(0);
	}
	int k;
	for (int i = 0; i < N; i++)
	{
		cin >> k;
		Wine.push_back(k);
	}
}
void Solution()
{
	cout << DP();
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