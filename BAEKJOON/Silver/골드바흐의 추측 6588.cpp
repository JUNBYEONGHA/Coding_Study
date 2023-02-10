#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
#include <cstring>

#define endl "\n"
using namespace std;

bool arr[1000001];

void che(int size)
{
	arr[0] = true;
	arr[1] = true;

	for (int i = 2; i * i < size; i++) {
		if (arr[i] == true)
			continue;
		for (int j = i * i; j < size; j += i) {
			arr[j] = true;
		}
	}
}

void Answer()
{
	che(1000001);
	int n;
	bool hasAns = false;
	while (cin >> n) {
		if (n == 0) break;

		for (int i = 3; i < n; i += 2) {
			if (!arr[i] && !arr[n - i]) {
				hasAns = true;
				cout << n << " = " << i << " + " << n - i << endl;
				break;
			}
		}
		if (!hasAns) cout << "Goldbach's conjecture is wrong." << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}