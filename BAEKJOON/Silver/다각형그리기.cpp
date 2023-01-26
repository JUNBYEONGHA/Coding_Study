#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>

#define endl "\n"
using namespace std;

vector<vector<int>> result;

void Answer()
{
	int n;
	cin >> n;
	vector<int>figure(n) , reversefigure(n);
	for (int i = 0; i < n; i++)
	{
		cin >> figure[i];
		reversefigure[i] = (figure[i] + 1) % 4 + 1;
	}
	reverse(reversefigure.begin(), reversefigure.end());
	int t;
	cin >> t;
	while (t--)
	{
		vector<int> temp(n);
		for (int i = 0; i < n; i++)
		{
			cin >> temp[i];
		}
		for (int i = 0; i < n; i++)
		{
			bool check = true;
			for (int j = 0; j < n; j++)
			{
				if (temp[(j + i) % n] != figure[j] &&
					temp[(j + i) % n] != reversefigure[j])
				{
					check = false;
					break;
				}
			}
			if (check)
			{
				result.push_back(temp);
				break;
			}
		}
	}
	cout << result.size() << endl;
	for (int i = 0; i < result.size(); i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << result[i][j] << " ";
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