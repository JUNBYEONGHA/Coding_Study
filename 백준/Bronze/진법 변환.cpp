#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

#define endl "\n"
using namespace std;

void Answer()
{
	string N;
	int B;
	cin >> N >> B;
	int result = 0 , b = 1;
	for (int i = N.size() - 1; i >= 0; i--)
	{
		if (N[i] >= '0' && N[i] <= '9')
		{
			result += (N[i] - '0') * b;
		}
		else
		{
			result += (N[i] - 'A' + 10) * b;
		}
		b *= B;
	}
	cout << result;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}