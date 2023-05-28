#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <map>

#define endl "\n"
using LL = long long;
using namespace std;

void Answer()
{
	int N, M;
	cin >> N >> M;

	vector<int> v;

	for (int i = 0; i < N; i++)
	{
		int P, L;
		cin >> P >> L;

		vector<int> temp(P);

		for (int j = 0; j < P; j++)
		{
			cin >> temp[j];
		}

		if (P < L)
		{
			v.push_back(1);

			continue;
		}

		sort(temp.begin(), temp.end(), greater<int>());

		v.push_back(temp[L - 1]);
	}

	sort(v.begin(), v.end());

	int result = 0;

	for (int i = 0; i < v.size(); i++)
	{
		if (M >= v[i])
		{
			M -= v[i];

			result++;
		}
		else
		{
			break;
		}
	}
	cout << result ;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}