#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;


void Answer()
{
	int A, B, C, M;
	int num = 0, tired = 0;

	cin >> A >> B >> C >> M;

	for (int i = 0; i < 24; i++) {
		if (tired + A <= M) {
			tired += A;
			num++;
		}
		else {
			tired -= C;
			if (tired < 0) tired = 0;
		}
	}
	cout << num * B;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}