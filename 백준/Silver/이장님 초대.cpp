#include<iostream>
#include<cmath>
#include<algorithm>
#define endl "\n"
using namespace std;

int tree[100001];

void Answer()
{
	int N , result = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> tree[i];
	}
	sort(tree, tree + N, greater<int>());
	for (int i = 0; i < N; i++)
	{
		tree[i] += i + 1;
		result = max(result, tree[i]);
	}
	cout << result + 1;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}