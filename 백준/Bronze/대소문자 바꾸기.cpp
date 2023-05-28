#include<iostream>
#define endl "\n"
using namespace std;

int arr[101][101];

void Answer()
{
	string A;
	cin >> A;
	for (int i = 0; i < A.size(); i++)
	{
		if (A[i] > 64 && A[i] < 91)
		{
			A[i] += 32;
		}
		else
		{
			A[i] -= 32;
		}
	}
	cout << A;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}