#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int t;
	cin >> t;
	while (t--)
	{
		int result = 0;
		int a , m = 1000;
		for (int i = 0; i < 7; i++)
		{
			cin >> a;
			if (a % 2 == 0)
			{
				m = min(m, a);
				result += a;
			}
		}
		cout << result << " " << m << endl;;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}