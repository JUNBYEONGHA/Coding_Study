#include<iostream>
#define endl "\n"
using namespace std;

int arr[101];

void Answer()
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	int A;
	cin >> A;
	int result = 0;
	for (int i = 0; i < N; i++)
	{
		if (A == arr[i])
		{
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