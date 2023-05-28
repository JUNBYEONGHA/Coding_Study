#include<iostream>
#include<vector>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int N;
	cin >> N;
	vector<int> answer, temp;
	int a;
	for (int i = 1; i <= N; i++)
	{
		cin >> a;
		while (a--)
		{
			if (answer.empty()) return;
			temp.push_back(answer.back());
			answer.pop_back();
		}
		answer.push_back(i);
		while (!temp.empty())
		{
			answer.push_back(temp.back());
			temp.pop_back();
		}
	}
	for (int i = 0; i < N; i++)
	{
		cout << answer[i] << " ";
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}