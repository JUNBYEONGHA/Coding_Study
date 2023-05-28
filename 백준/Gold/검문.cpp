#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

#define endl "\n"
using namespace std;

int N;
int arr[102];

int GCD(int a, int b)
{
	int c;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}


void Input()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
}
void Solution()
{
	sort(arr, arr + N);
	int gcd = arr[1] - arr[0];
	for (int i = 2; i < N; i++)
	{
		gcd = GCD(gcd, arr[i] - arr[i - 1]);
	}
	vector<int> result;
	for (int i = 2; i * i <= gcd; i++)
	{
		if (gcd % i == 0)
		{
			result.push_back(i);
			result.push_back(gcd / i);
		}
	}
	result.push_back(gcd);
	sort(result.begin(), result.end());
	result.erase(unique(result.begin(), result.end()), result.end());
	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << " ";
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