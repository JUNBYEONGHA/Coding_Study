#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

#define endl "\n"
using namespace std;

void Answer()
{
	int n, m;
	int a, b, c;
	int count;
	int map[110] = {0,};

	cin >> n >> m;

	while (m--) {
		cin >> a >> b >> c;

		for (int i = a; i <= b; ++i) {
			map[i] = c;
		}
	}

	for (int i = 1; i <= n; ++i) {
		count = 0;
		cout << map[i] << " ";
	}
	cout << endl;

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}