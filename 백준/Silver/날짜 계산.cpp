#include<iostream>
#include<vector>
#include<algorithm>

#define endl "\n"
using namespace std;

void Answer()
{
	int E, S, M;
	cin >> E >> S >> M;
	int result, year = 1;
	while (true)
	{
		if ((year - E) % 15 == 0 && (year - S) % 28 == 0 && (year - M) % 19 == 0)
		{
			result = year;
			break;
		}
		year++;
	}
	cout << result;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}