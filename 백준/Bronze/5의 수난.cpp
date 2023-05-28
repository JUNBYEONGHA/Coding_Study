#include<iostream>
#include<math.h>
#define endl "\n"
using namespace std;

void Answer()
{
	string A;
	cin >> A;
	int result = 0;
	for (int i = 0; i < A.size(); i++)
	{
		result += pow(A[i] - 48, 5);
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