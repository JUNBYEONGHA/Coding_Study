#include<iostream>
#include<vector>
#include <algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int a, i, n;
	char b;
	cin >> n;
	while (n--) {
		cin >> a >> b;
		if (b == 'C') {
			for (i = 0; i < a; i++) {
				char c;
				cin >> c;
				cout << (int)(c - 'A' + 1) << " ";
			}
		}
		else {
			for (i = 0; i < a; i++) {
				int c;
				cin >> c;
				cout << (char)('A' + c - 1) << " ";
			}
		}
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