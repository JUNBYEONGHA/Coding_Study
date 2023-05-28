#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <map>

#define endl "\n"
using namespace std;

void Answer()
{
	int K[3];

	cin >> K[0];
	cin >> K[1];
	cin >> K[2];

	sort(K, K + 3);

	cout << max(K[2] - K[1], K[1] - K[0]) - 1 << endl;

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}