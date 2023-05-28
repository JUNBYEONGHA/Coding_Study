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
		int N, D;
		cin >> N >> D;
		int result = 0;
		for (int i = 0; i < N; i++)
		{
			int v, f, c;
			cin >> v >> f >> c;
			if (v * f / c >= D)
				result++;
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