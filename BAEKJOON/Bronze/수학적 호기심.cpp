#include <iostream>
#include <algorithm>
#include <queue>
#include <string>

#define endl "\n"
using namespace std;

void Answer()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		int result = 0;
		for (int i = 1; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if ((i * i + j * j + m) % (i * j) == 0)
				{
					result++;
				}
			}
		}
		cout << result << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}