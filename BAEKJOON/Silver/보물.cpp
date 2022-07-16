#include<iostream>
#include<algorithm>
#define endl "\n"
using namespace std;

int A[101], B[101];

void Answer()
{
	int n; 
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> B[i];
	}
	sort(A, A + n);
	sort(B, B + n, greater<int>());
	int result = 0;
	for (int i = 0; i < n; i++)
	{
		result += A[i] * B[i];
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