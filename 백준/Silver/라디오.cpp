#include<iostream>
#include<cmath>
#include<algorithm>
#define endl "\n"
using namespace std;

int team[12];

void Answer()
{
	int A, B, N;
	cin >> A >> B;
	cin >> N;
	int result = 1 , d = 1000;
	for (int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		d = min(d, abs(B - a));
	}
	result = min(result + d, abs(A - B));
	cout << result;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}