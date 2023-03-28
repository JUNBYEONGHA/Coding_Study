#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <map>
#include <deque>
#include <queue>
#include <stack>

#define endl "\n"
using LL = long long;
using namespace std;

void Answer()
{
	string A, B;
	cin >> A >> B;

	int minimum = 51;
	for (int i = 0; i <= B.size() - A.size(); i++)
	{
		int temp = 0;
		for (int j = 0; j < A.size(); j++)
		{
			if (A[j] != B[i + j]) temp++;
		}
		minimum = min(minimum, temp);
	}
	cout << minimum;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}