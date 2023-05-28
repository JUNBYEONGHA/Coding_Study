#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

#define endl "\n"
using namespace std;

void Answer()
{
	string eight;
	string two[8] = { "000", "001", "010", "011", "100", "101", "110", "111" };
	int temp;

	cin >> eight;

	for (int i = 0; i < eight.length(); i++) {

		temp = eight[i] - '0';
		if (i == 0) cout << stoi(two[temp]);
		else cout << two[temp];
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}