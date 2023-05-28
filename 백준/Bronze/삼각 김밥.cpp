#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <map>
#include <deque>
#include <queue>

#define endl "\n"
using LL = long long;
using namespace std;

void Answer()
{
	double X, Y;
	int N;
	cin >> X >> Y >> N;

	double costPerGram = X / Y;

	for (int i = 0; i < N; i++)
	{
		double cost, gram;
		cin >> cost >> gram;

		costPerGram = min(costPerGram, cost / gram);
	}

	cout.precision(2);
	cout << fixed;
	cout << costPerGram * 1000;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}