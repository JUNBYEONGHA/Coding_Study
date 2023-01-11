#include <iostream>

#define endl "\n"
using namespace std;	

void Answer()
{
	int t, n, k;
	cin >> t;
	while (t--)
	{
		cin >> n >> k;
		int result = 0;
		for (int i = 0; i < n; i++)
		{
			int temp;
			cin >> temp;
			result += temp / k;
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