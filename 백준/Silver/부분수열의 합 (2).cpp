#include<iostream>
#include<set>
#define endl "\n"
using namespace std;

bool range[20 * 100000];
int S[20];
int N;
void solve(int begin, int sum)
{
	if (begin == N) {
		range[sum] = true;
		return;
	}
	solve(begin + 1, sum + S[begin]);
	solve(begin + 1, sum);
}
void Answer()
{
	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		cin >> S[i];
	}
	solve(0, 0);

	int start = 0;
	while (1)
	{
		if (range[start] != 1) {
			cout << start << endl;
			return ;
		}
		start++;
	};
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}