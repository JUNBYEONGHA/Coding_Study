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
	int A, B, C, D;
	double temp, max = 0;
	int t, ans;
	cin >> A >> B;
	cin >> C >> D;

	double a[4] = { A,B,D,C };
	for (int i = 0; i < 4; i++)
	{
		temp = double(a[0] / a[3] + a[1] / a[2]);
		if (temp > max)
		{
			max = temp;
			ans = i;
		}
		t = a[3];
		a[3] = a[2];
		a[2] = a[1];
		a[1] = a[0];
		a[0] = t;
	}
	cout << ans;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}