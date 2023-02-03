#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

#define endl "\n"
using namespace std;

void Answer()
{
	string N = "";
	int B;
	int result = 0;
	cin >> result >> B;
	while (result)
	{
		int b = result % B;
		if (b < 10)
		{
			N = char(b + 48) + N;
		}
		else
		{
			N = char(b + 55) + N;
		}
		result = result / B;
	}
	cout << N;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}