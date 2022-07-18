#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;


void Answer()
{
	int N, L, K, result = 0;
	cin >> N >> L >> K;
	int A = 0, B = 0;
	int sub1, sub2;
	for (int i = 0; i < N; i++)
	{
		cin >> sub1 >> sub2;
		if (sub1 <= L && sub2 <= L)
		{
			B++;
		}
		else if (sub1 <= L)
		{
			A++;
		}
	}
	if (B >= K)
	{
		result = K * 140;
	}
	else
	{
		result += B * 140;
		if (K - B <= A)
		{
			result += (K - B) * 100;
		}
		else
		{
			result += A * 100;
		}
	}
	cout << result;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}