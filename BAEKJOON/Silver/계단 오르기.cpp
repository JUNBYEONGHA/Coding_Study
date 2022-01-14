#include<iostream>
#include<queue>
#include<vector>
#include<cstring>

#define endl "\n"
using namespace std;

#define MAX 301
int arr[MAX];
int DP[MAX];
int N;

int Max(int A, int B) { if (A > B) return A; return B; }

void Input()
{
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> arr[i];
	}
}
void Solution()
{
	DP[1] = arr[1];
	DP[2] = arr[1] + arr[2];
	DP[3] = Max(arr[1] + arr[3], arr[2] + arr[3]);

	for (int i = 4; i <= N; i++)
	{
		DP[i] = Max(DP[i - 2] + arr[i], DP[i - 3] + arr[i - 1] + arr[i]);
	}
	cout << DP[N];
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