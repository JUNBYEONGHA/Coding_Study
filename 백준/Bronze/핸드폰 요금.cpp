#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
#include <cstring>

#define endl "\n"
using namespace std;

void Answer()
{
	int N, temp, m = 0, y = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> temp;
		y += (temp / 30 + 1) * 10;
		m += (temp / 60 + 1) * 15;
	}
	if (m < y) cout << "M " << m;
	else if (m > y) cout << "Y " << y;
	else if (m == y) cout << "Y M " << m;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}