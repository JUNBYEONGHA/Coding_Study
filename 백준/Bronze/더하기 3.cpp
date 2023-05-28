#include <iostream>

#define endl "\n"
using namespace std;

void Answer()
{
	int N, result = 0;
	while (cin >> N)
	{
		result += N;
	}
	cout << result;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
}