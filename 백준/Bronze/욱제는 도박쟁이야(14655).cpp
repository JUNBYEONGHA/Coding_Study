#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;


void Answer()
{
	int N;
	cin >> N;
	long long sum = 0;
	for (int i = 0; i < N;i++)
	{
		int coin;
		cin>> coin;
		sum+= abs(coin);
	}
	for (int i = 0; i < N; i++)
	{
		int coin;
		cin >> coin;
		sum += abs(coin);
	}
	cout << sum << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}