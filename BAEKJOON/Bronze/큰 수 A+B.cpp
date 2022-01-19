#include<iostream>
#include<queue>
#include<string>
#include<vector>
#include<algorithm>

#define endl "\n"
using namespace std;

string A, B;
int num1[100001], num2[100001];

void Input()
{
	cin >> A >> B;
}
void Solution()
{
	if (A.size() < B.size())
	{
		string temp = B;
		B = A;
		A = temp;
	}
	vector<int> answer;
	int sum;
	for (int i = 0; i < A.size(); i++)
		num1[i + 1] = A[i] - '0';

	for (int i = 0; i < B.size(); i++)
		num2[i + 1 + (A.size() - B.size())] = B[i] - '0';

	for (int i = A.size(); i > 0; i--)
	{
		sum = num1[i] + num2[i];
		if (sum >= 10)
		{
			num1[i - 1]++;
			sum -= 10;
		}
		answer.push_back(sum);
	}

	if (num1[0] != 0) cout << 1;
	for (int i = answer.size() - 1; i >= 0; i--)
	{
		cout << answer[i];
	}
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