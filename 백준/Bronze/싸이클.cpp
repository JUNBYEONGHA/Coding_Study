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

int n, p;
int arrCnt[98], cnt = 0;

void Answer()
{
	cin >> n >> p;
	int temp = n;
	while (true) {
		temp = (temp * n) % p;
		if (arrCnt[temp] == 2) break;
		arrCnt[temp] += 1;
	}
	for (int i = 0; i < p; i++) {
		if (arrCnt[i] == 2) cnt++;
	}
	cout << cnt << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}