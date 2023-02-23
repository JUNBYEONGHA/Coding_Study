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
	int N , M, K;
	cin >> N >> M >> K;
	int pen[1001] = { 0 };
	for (int i = 0; i < N; i++)
	{
		cin >> pen[i];
	}
	int need = (M * K);
	sort(pen, pen + N, greater<int>());
	for (int i = 0; i < N; i++)
	{
		need -= pen[i];
		if (need <= 0)
		{
			cout << i + 1;
			break;
		}
	}
	if (need > 0) cout << "STRESS";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}