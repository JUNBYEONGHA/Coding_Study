#include<iostream>
#include<algorithm>
#define endl "\n"
using namespace std;

int S[51];

void Answer()
{
	int n , N;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> S[i];
	}
	cin >> N;
	sort(S, S + n);
	for (int i = 0; i <= n; i++) {
		if (S[i] > N) 
		{
			cout << (N - S[i - 1]) * (S[i] - N) - 1;
			return ;
		}
		else if (S[i] == N) {
			cout << 0;
			return ;
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