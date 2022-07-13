#include<iostream>
#include<cmath>
#define endl "\n"
using namespace std;

int x[35], y[35], ans;

void Answer()
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> x[i] >> y[i];
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1 ; j < N; j++)
		{
			for (int k = j + 1; k < N; k++)
			{
				ans = max(ans, abs(x[i] * y[j] + x[j] * y[k] + x[k] * y[i] -
					x[j] * y[i] - x[k] * y[j] - x[i] * y[k]));
			}
		}
	}
	if (ans % 2) cout << ans / 2 << ".5";
	else cout << ans / 2;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}