#include<iostream>
#include<vector>
#include<algorithm>

#define endl "\n"
using namespace std;


void Answer()
{
	int k, T; cin >> k >> T;
	while (T--) {
		int x, y; cin >> x >> y;
		if (x == y) cout << "1" << endl;
		else if (x < y) cout << (k + x - 2 * (y - 1) > 0) << endl;
		else cout << (k - 2 * (x - 1) + y + 1 > 0) << endl;
	}

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}