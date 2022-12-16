#include<iostream>
#include<vector>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int N , answer = 0;
	cin >> N;
	for (int i = 2; i < 500; i++)
	{
		for (int j = i - 1; j > 0; j--)
		{
			if (i * i - j * j == N)
			{
				answer++;
			}
			else if (i * i - j * j > N)
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