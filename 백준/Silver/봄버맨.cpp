#include <iostream>
#include <vector>
#include <algorithm>

#define endl "\n"
using namespace std;

string arr[201];
int r, c, n;
int y_ar[4] = { -1,0,1,0 };
int x_ar[4] = { 0,1,0,-1 };

void Answer()
{
	cin >> r >> c >> n;
	for (int i = 0; i < r; i++)
		cin >> arr[i];

	if (n % 2 == 0) {
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++)
				cout << 'O';
			cout << "\n";
		}
		return ;
	}

	string copyed[201];
	for (int i = 0; i < r; i++)
		copyed[i] = arr[i];

	for (int i = 1; i < n; i += 2) {
		for (int j = 0; j < r; j++)
			copyed[j] = arr[j];


		for (int j = 0; j < r; j++)
			for (int k = 0; k < c; k++)
				if (arr[j][k] == 'O') {
					for (int u = 0; u < 4; u++) {
						int ny = j + y_ar[u];
						int nx = k + x_ar[u];

						if (ny >= 0 && ny < r && nx >= 0 && nx < c)
							copyed[ny][nx] = 'O';
					}
				}

		for (int j = 0; j < r; j++)
			for (int k = 0; k < c; k++) {
				if (copyed[j][k] == 'O')
					arr[j][k] = '.';
				else {
					arr[j][k] = 'O';
				}
			}
	}

	for (int i = 0; i < r; i++)
		cout << arr[i] << endl;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
}