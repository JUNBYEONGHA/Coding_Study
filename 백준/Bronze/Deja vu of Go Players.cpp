#include<iostream>
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
		int n, m, c;
		cin >> n >> m;
		vector<int> a, b;
		for (int i = 0; i < n; i++)
		{
			cin >> c;
			a.push_back(c);
		}
		for (int i = 0; i < m; i++)
		{
			cin >> c;
			b.push_back(c);
		}
		if (n <= m)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
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