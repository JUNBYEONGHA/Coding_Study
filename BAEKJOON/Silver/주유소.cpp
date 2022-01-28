#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

#define endl "\n"
using namespace std;

long long N;
vector<long long> road , city;

void Input()
{
    cin >> N;
	int A;
	for (int i = 0; i < N - 1 ; i++)
	{
		cin >> A;
		road.push_back(A);
	}
	for (int i = 0; i < N ; i++)
	{
		cin >> A;
		city.push_back(A);
	}
}
void Solution()
{
	long long sum = 0 , gready = 1000000000;
	for (int i = 0; i < N - 1; i++)
	{
		if (city[i] < gready)
			gready = city[i];
		sum += gready * road[i];
	}

	cout << sum;
}
void Answer()
{
	Input();
	Solution();
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}