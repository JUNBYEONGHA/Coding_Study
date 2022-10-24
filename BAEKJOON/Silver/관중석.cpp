#include<iostream>
#include<vector>
#include<algorithm>

#define endl "\n"
using namespace std;

bool chk[2001][2001];
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

void Answer()
{
	int d1, d2, ans = 0;
	cin >> d1 >> d2;
	for (int i = d1; i <= d2; i++) {
		for (int j = 1; j <= i; j++) {
			int g = gcd(i, j), a = j / g, b = i / g;
			if (chk[a][b] == 0) { ans++; chk[a][b] = 1; }
		}
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