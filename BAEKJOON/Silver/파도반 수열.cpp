#include<iostream>
#include<queue>
#include<vector>
#include<cstring>

#define endl "\n"
using namespace std;

#define MAX 110

long long P[MAX] = { 1,1,1,2,2, };

void Input()
{
	for (int i = 5; i < MAX; i++)
	{
		P[i] = P[i - 1] + P[i - 5];
	}
}
void Solution()
{
	int t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		cout << P[n-1] << endl;
	}
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