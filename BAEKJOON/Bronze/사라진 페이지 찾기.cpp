#include <iostream>
#include <algorithm>
#include <queue>
#include <string>
#include <cmath>

#define endl "\n"
using namespace std;

void Answer()
{
	while (true)
	{
		int fullpage, onepage;
		cin >> fullpage;
		if (fullpage == 0) break;
		cin >> onepage;
		for (int i = 0; i < fullpage / 4; i++)
		{
			int result[4] = { 2 * i + 1,2 * i +2,fullpage - 2 * i - 1,fullpage - 2 * i };
			bool check = false;
			for (int j = 0; j < 4; j++)
			{
				if (result[j] == onepage)
				{
					check = true;
				}
			}
			if (check)
			{
				for (int j = 0; j < 4; j++)
				{
					if (result[j] != onepage)
					{
						cout << result[j] << " ";
					}
				}
				break;
			}
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