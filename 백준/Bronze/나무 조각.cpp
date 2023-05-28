#include <iostream>
#include <vector>
#include <algorithm>

#define endl "\n"
using namespace std;

int p[6];


void Answer()
{
	for (int i = 1; i <= 5; i++) cin >> p[i];

	for (int i = 5; i >= 1; i--) {
		for (int j = 1; j < i; j++) {
			if (p[j] > p[j + 1]) {
				swap(p[j], p[j + 1]);
				for (int k = 1; k <= 5; k++)
					cout << p[k] << " ";
				cout << endl;
			}
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