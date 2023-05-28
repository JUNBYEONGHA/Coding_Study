#include<iostream>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int n, a, prev = 0, result = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (a == prev % 3)
		{
			result++;
			prev++;
		}
	}
	cout << result;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}