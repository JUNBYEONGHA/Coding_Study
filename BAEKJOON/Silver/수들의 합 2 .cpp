#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

int arr[10001];

void Answer()
{	
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	int answer = 0;
	for (int i = 0; i < N; i++)
	{
		int sum = arr[i];
		if (sum == M)
		{
			answer++;
			continue;
		}
		for (int j = i + 1; j < N; j++)
		{
			sum += arr[j];
			if (sum == M)
			{
				answer++;
				continue;
			}
			else if (sum > M)
			{
				break;
			}
		}
	}
	cout << answer;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}