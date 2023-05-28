#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
#include <cstring>

#define endl "\n"
using namespace std;

int card[21];

void Answer()
{
	for (int i = 1; i <= 20; i++)
	{
		card[i] = i;
	}
	int a, b;
	for (int i = 0; i < 10; i++)
	{
		cin >> a >> b;
		reverse(card + a, card + b + 1);
	}
	for (int i = 1; i <= 20; i++)
	{
		cout << card[i] << " ";
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}