#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

#define endl "\n"
using namespace std;

void Answer()
{
	int N;
	cin >> N;
	int A, B, C;
	cin >> A >> B >> C;
	int result = 0;
	if (A - N > 0) result += N;
	else result += A;
	if (B - N > 0) result += N;
	else result += B;
	if (C - N > 0) result += N;
	else result += C;
	cout << result;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}