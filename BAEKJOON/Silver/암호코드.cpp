#include<iostream>
#include<queue>
#include<vector>
#include<cstring>

#define endl "\n"
using namespace std;

#define MAX 5001
#define DIV 1000000

int DP[MAX];
string N;

void Input()
{
	cin >> N;
}
void Solution()
{
	N = "0" + N;
	int length = N.size();
	DP[0] = 1;
	for (int i = 1; i <= length; i++)
	{
		int num = N[i] - '0';
		if (num > 0 && num <= 9)
		{
			DP[i] += DP[i - 1];
			DP[i] %= DIV;
		}
		num = (N[i - 1] - '0') * 10 + (N[i] - '0');
		if (num >= 10 && num <= 26)
		{
			DP[i] += DP[i - 2];
			DP[i] %= DIV;
		}
	}
	cout << DP[length - 1];
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