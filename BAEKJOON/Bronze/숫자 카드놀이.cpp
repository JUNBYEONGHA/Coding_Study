#include <iostream>
#include <algorithm>
#include <queue>
#include <string>

#define endl "\n"
using namespace std;

void Answer()
{
	while (true)
	{
		int n;
		cin >> n;
		if (n == 0) break;
		cout << n << " ";
		while (n > 9)
		{
			string temp = to_string(n);
			n = 1;
			for (int i = 0; i < temp.size(); i++)
			{
				n *= (temp[i] - 48);
			}
			cout << n << " ";
		}
		cout << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}