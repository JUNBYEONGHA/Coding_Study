#include<iostream>
#include<vector>
#include<queue>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int N, M;
	cin >> N >> M;

	int A;
	cin >> A;
	int idx = 1;

	int result = 0;

	for (int i = 0; i < A;i++)
	{
		int num;
		cin >> num;
		while (true)
		{
			bool flag = false;
			for (int j = idx; j <= idx + (M - 1); j++)
			{
				if (j == num)
				{
					flag = true;
					break;
				}
			}
			if (flag)
			{
				break;
			}
			if (idx > num)
			{
				idx--;
			}
			else
			{
				idx++;
			}
			result++;
		}
	}
	cout << result << endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}