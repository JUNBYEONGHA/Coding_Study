#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>

#define endl "\n"
using namespace std;

int N, result = INT_MIN;
string mathStr;

int cal(int a, int b, char op)
{
	switch (op)
	{
	case '+': a += b;; break;
	case '*': a *= b;; break;
	case '-': a -= b;; break;
	default:
		break;
	}
	return a;
}
void bracket(int index, int num)
{
	if (index > N - 1)
	{
		result = max(result, num);
		return;
	}
	char op = (index == 0) ? '+' : mathStr[index - 1];

	if (index + 2 < N)
	{
		int br = cal(mathStr[index] - '0', mathStr[index + 2] - '0', mathStr[index + 1]);
		bracket(index + 4, cal(num, br, op));
	}
	bracket(index + 2, cal(num, mathStr[index] - '0', op));
}

void Answer()
{
	cin >> N >> mathStr;
	bracket(0, 0);
	cout << result;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
}