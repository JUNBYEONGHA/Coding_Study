#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define endl "\n"
using namespace std;

void cantou(int n)
{
	if (n == 0)
	{
		cout << "-";
		return;
	}

	cantou(n - 1);

	for (int i = 0; i < pow(3, n-1) ; i++)
	{
		cout << " ";
	}

	cantou(n - 1);
}

void Answer()
{
	int N;
	while (cin >> N)
	{
		cantou(N);
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