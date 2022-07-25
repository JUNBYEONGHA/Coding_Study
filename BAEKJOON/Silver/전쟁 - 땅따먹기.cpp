#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>
#include<cstring>
#include<map>
#define endl "\n"
using namespace std;

void Answer()
{
	int n;
	cin >> n;
	while (n--)
	{
		map<long long, int> ground;
		long long A = 0, B = -1;
		int k;
		cin >> k;
		for (int i = 0; i < k; i++)
		{
			long long a;
			cin >> a;
			long long b = ++ground[a];
			if (b > A)
			{
				B = a;
				A = b;
			}
		}
		if (A > k / 2) cout << B << endl;
		else cout << "SYJKGW" << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}