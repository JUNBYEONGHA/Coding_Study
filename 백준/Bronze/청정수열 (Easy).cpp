#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;


void Answer()
{
	int result = 1, N;
	cin >> N;
	for (int i = N; i > 0; i--)
	{
		result *= i;
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