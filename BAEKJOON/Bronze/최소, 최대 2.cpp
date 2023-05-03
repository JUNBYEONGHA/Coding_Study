#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <deque>
#include <queue>
#include <stack>
#include <cstring>
#include <sstream>
#include <set>
#include <map>

#define endl "\n"
using LL = long long;
using namespace std;

void Answer()
{
	int T; cin >> T;
	while (T--)
	{
		int N; cin >> N;
		vector<int> arr(N);
		for (int i = 0; i < N; i++)
		{
			cin >> arr[i];
		}
		sort(arr.begin(), arr.end());
		cout << arr[0] << " " << arr[N - 1] << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}