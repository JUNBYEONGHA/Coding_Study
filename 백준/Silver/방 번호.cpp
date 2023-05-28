#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
#include <cstring>

#define endl "\n"
using namespace std;
int numbers[10];

void Answer()
{
	string s;
	cin >> s;
	for (int i = 0; i < s.size() ; i++)
	{
		numbers[s[i] - '0']++;
	}
	int sixnine = (numbers[6] + numbers[9] + 1) / 2;
	numbers[6] = sixnine;
	numbers[9] = sixnine;
	int result = 0;
	for (int i = 0; i < 10; i++)
	{
		result = max(result, numbers[i]);
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