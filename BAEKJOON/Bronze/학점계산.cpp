#include<iostream>
#define endl "\n"
using namespace std;

int arr[101][101];

void Answer()
{
	string A;
	cin >> A;
	float result = 0;
	result = 69 - A[0];
	if (result != -1)
	{
		if (A[1] == '+')
		{
			result += 0.3f;
		}
		else if (A[1] == '-')
		{
			result -= 0.3f;
		}
		printf("%0.1f", result);
	}
	else
	{
		cout << "0.0";
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}