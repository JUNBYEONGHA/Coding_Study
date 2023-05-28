#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int L, A, B, C, D;
	cin >> L >> A >> B >> C >> D;
	if (A / C > B / D)
	{
		if (A % C == 0)
		{
			cout << L - A / C;
		}
		else
		{
			cout << L - A / C - 1;
		}
	}
	else
	{
		if (B % D == 0)
		{
			cout << L - B / D;
		}
		else
		{
			cout << L - B / D - 1;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}