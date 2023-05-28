#include<iostream>
#include<queue>
#include<vector>
#include<cstring>

#define endl "\n"
using namespace std;

#define MAX 110

int N, K;
int Coin[MAX];
int DP[10010];

void Input()
{
    cin >> N >> K;
	for (int i = 1; i <= N; i++) cin >> Coin[i];
}
void Solution()
{
    DP[0] = 1;
    for (int i = 1; i <= N; i++)
    {
        for (int j = Coin[i]; j <= K; j++)
        {
            DP[j] = DP[j] + DP[j - Coin[i]];
        }
    }
    cout << DP[K] << endl;
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