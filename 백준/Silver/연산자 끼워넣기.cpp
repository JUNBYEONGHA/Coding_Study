#include<iostream>
#include<vector>
#include<algorithm>

#define endl "\n"
using namespace std;

int N , MIN = 1000000000, MAX = -1000000000;
int NUM[12];

void DFS(int total, int length , int plus , int minus , int multi , int div)
{
	if (length == N)
	{
		MIN = min(MIN, total);
		MAX = max(MAX, total);
		return;
	}
	if (plus > 0)
		DFS(total + NUM[length], length + 1, plus - 1, minus, multi, div);
	if (minus > 0)
		DFS(total - NUM[length], length + 1, plus, minus - 1, multi, div);
	if (multi > 0)
		DFS(total * NUM[length], length + 1, plus, minus, multi - 1, div);
	if (div > 0)
		DFS(total / NUM[length], length + 1, plus, minus, multi, div - 1);
}

void Input()
{
	cin >> N;
	for (int i = 0; i < N ; i++)
	{
		cin >> NUM[i];
	}
}
void Solution()
{
	int plus, minus, multi, div;
	cin >> plus >> minus >> multi >> div;
	DFS(NUM[0], 1, plus, minus, multi, div);
	cout << MAX << endl << MIN;
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