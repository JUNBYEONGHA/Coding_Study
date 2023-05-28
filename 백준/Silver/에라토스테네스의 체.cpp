#include<iostream>
#include<vector>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int n, k;
	int cnt(0);
	cin >> n >> k;
	vector<int> prime(n + 1);

	for (int i = 2; i <= n; i++)
	{
		prime[i] = i;
	}

	for (int i = 2; i <= n; i++)
	{
		for (int j = i; j <= n; j += i)
		{
			if (prime[j] != 0)
			{
				prime[j] = 0;
				cnt++;
				if (cnt == k)
				{
					cout << j ;
					return;
				}
			}
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