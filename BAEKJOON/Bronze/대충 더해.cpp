#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define endl "\n"
using namespace std;
vector<int> res;

void Answer()
{
	string A, B;
	cin >> A >> B;
	int i = A.length(), j = B.length();
	for (; i >= 0 && j >= 0; i--, j--) {
		int a = A[i] - '0';
		int b = B[j] - '0';
		res.push_back(a + b);
	}

	while (i >= 0)
		res.push_back(A[i--] - '0');
	while (j >= 0)
		res.push_back(B[j--] - '0');

	for (int i = res.size() - 1; i > 0; i--) {
		cout << res[i];
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}