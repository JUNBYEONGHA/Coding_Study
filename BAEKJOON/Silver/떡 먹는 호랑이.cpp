#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>

#define endl "\n"
using namespace std;

int A[31], B[31];

void Answer()
{
	int D, K;
	cin >> D >> K;
	A[1] = 1;
	A[2] = 0;
	B[1] = 0;
	B[2] = 1;
	for (int i = 3; i <= D; i++)
	{
		A[i] = A[i - 1] + A[i - 2];
		B[i] = B[i - 1] + B[i - 2];
	}
	for (int i = 1; i <= K; i++)
	{
		int temp = K - (A[D] * i);
		if (temp % B[D] == 0)
		{
			cout << i << endl << temp / B[D] << endl;
			return;
		}
	}
	
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}