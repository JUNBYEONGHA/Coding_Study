#include<iostream>
#include<queue>
#include<string>
#include<vector>
#include<algorithm>

#define endl "\n"
using namespace std;

int num;

void Input()
{
	cin >> num;
}
void Solution()
{
	string A;
	int answer = 0;
	while (num--)
	{
		cin >> A;
		A.erase(unique(A.begin(), A.end()), A.end());
		bool check = true;
		for (int i = 0; i < A.size(); i++)
		{
			char c = A[i];
			for (int j = i+1; j < A.size(); j++)
			{
				if (c == A[j])
				{
					check = false;
					break;
				}
			}
			if (!check) break;
		}
		if (check) answer++;
	}
	cout << answer;
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