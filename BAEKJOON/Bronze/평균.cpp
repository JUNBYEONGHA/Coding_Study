#include<iostream>
#include<queue>
#include<vector>

#define endl "\n"
using namespace std;

double num;
double arr[1001];

void Input()
{
	cin >> num;
}
void Solution()
{
	double A, total = 0 , max = 0;
	for (int i = 0; i < num; i++)
	{
		cin >> A;
		arr[i] = A;
		if (max < A)
			max = A;
	}
	for (int i = 0; i < num; i++)
	{
		arr[i] = arr[i] / max * 100;
		total += arr[i];
	}

	cout << total / num;
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