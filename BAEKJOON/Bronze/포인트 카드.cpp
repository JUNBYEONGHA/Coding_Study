#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;


void Answer()
{
	int N, M;
	cin >> N >> M;
	
	int A, B, count = 0,result = 0;
	int arr[1001][2];
	for (int i = 0; i < M; i++)
	{
		cin >> A >> B;
		if (A >= N)
		{
			arr[i][0] = A; arr[i][1] = 1;
			count++;
		}
		else
		{
			arr[i][0] = A; arr[i][1] = 0;
		}
	}
	if (count >= M - 1)
	{
		cout << 0;
	}
	else
	{
		for (int i = N - 1; i >= 0; i--)
		{
			for (int j = 0; j < M; j++)
			{
				if (arr[j][0] == i && arr[j][1] == 0)
				{
					result += (N - arr[j][0]);
					count++;
					arr[j][1] = 1;
				}
				if (count >= M - 1)
				{
					cout << result;
					return;
				}
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}