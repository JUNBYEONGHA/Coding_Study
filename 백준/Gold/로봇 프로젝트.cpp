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
	int x, n;

	while (cin >> x >> n) {
		x *= 10000000;
		vector<int> vec;
		int temp;

		for (int i = 0; i < n; i++) {
			cin >> temp;
			vec.push_back(temp);
		}
		sort(vec.begin(), vec.end());

		int low = 0, high = vec.size() - 1;
		bool flag = false;

		while (low < high) {

			int sum = vec[low] + vec[high];
			if (sum == x) {
				flag = true;
				break;
			}
			if (sum < x) { 
				low++;
			}
			else {
				high--;
			}


		}

		if (flag)
			cout << "yes " << vec[low] << ' ' << +vec[high] << endl;
		else
			cout << "danger" << endl;

	}


}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}