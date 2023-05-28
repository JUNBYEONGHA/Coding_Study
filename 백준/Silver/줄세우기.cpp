#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <deque>
#include <queue>
#include <stack>
#include <cstring>
#include <sstream>
#include <set>
#include <map>

#define endl "\n"
using LL = long long;
using namespace std;

void Answer()
{
	int T;
	cin >> T;
	while (T--)
	{
		int temp , cnt = 0; cin >> temp;
		vector<int> line(20);
		for (int i = 0; i < 20; i++)
		{
			cin >> line[i];
		}
		for (int i = 0; i < 20; i++)
		{
			for (int j = 0; j < i; j++)
			{
				if (line[i] < line[j])
				{
					swap(line[i], line[j]);
					cnt++;
				}
			}
		}
		cout << temp << " " << cnt << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}