#include<iostream>
#include<vector>
#include<algorithm>

#define endl "\n"
using namespace std;

void Answer()
{
	int N, result = 0 ,index = 1, a = 9;
	cin >> N;
	while (N > 0)
	{
		result += N;
		N -= a;
		a *= 10;
	}
	cout << result;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}