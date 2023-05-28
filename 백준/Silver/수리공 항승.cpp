#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <map>
#include <deque>
#include <queue>

#define endl "\n"
using LL = long long;
using namespace std;

void Answer()
{
	int N, L;
	cin >> N >> L;
	vector<int> tape(N);
	for (int i = 0; i < N; i++)
	{
		cin >> tape[i];
	}
	sort(tape.begin(), tape.end());

	int result = 1;
	int temp = L - 1;

	for (int i = 0; i < N - 1; i++) {
		if (tape[i + 1] - tape[i] <= temp) {
			temp -= tape[i + 1] - tape[i];
		}
		else {
			temp = L - 1;
			result++;
		}
	}
	cout << result;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}