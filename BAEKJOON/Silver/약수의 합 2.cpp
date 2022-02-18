#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<tuple>

#define endl "\n"
using namespace std;

void Answer()
{
	long long N;
	long long result = 0;
	cin >> N;
	for (long long i = 1; i <= N; i++)
	{
		result += (N / i) * i;
	}
	cout << result << endl;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}