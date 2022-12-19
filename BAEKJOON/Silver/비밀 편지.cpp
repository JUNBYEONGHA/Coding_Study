#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#define endl "\n"
using namespace std;

void Answer()
{
	int N;
	cin >> N;

	string str;
	int n, tmp;
	char str_rec[100][100];
	char str_rec_cha[100][100];

	while (N--)
	{
		int cnt = 0;
		cin >> str;
		n = sqrt(str.length());
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				str_rec[i][j] = str[cnt++];
			}
		}

		for (int i = 0; i < n; i++) {
			tmp = n;
			for (int j = 0; j < n; j++) {
				str_rec_cha[--tmp][i] = str_rec[i][j];
			}
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << str_rec_cha[i][j];
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