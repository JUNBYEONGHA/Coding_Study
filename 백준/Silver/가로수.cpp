#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

#define endl "\n"
using namespace std;

vector<int> v;
vector<int> p;
int N;

int GCD(int a, int b) {
	if (b == 0) return a;
	return GCD(b, a % b);
}

void Answer()
{
	cin >> N;
	for (int tmp, i = 0; i < N; i++) {
		cin >> tmp;
		p.push_back(tmp);
		if (i != 0)
			v.push_back(p[i] - p[i - 1]);
	}
	int gcd = v[0];
	for (int i = 1; i < v.size(); i++)
		gcd = GCD(gcd, v[i]);

	int len = p[N - 1] - p[0];
	int cnt = len / gcd;
	cnt -= N - 1;

	cout << cnt;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}