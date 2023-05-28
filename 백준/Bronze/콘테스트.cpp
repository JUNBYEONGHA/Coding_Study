#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	vector<int> A, B;
	for (int i = 0; i < 10; i++)
	{
		int a;
		cin >> a;
		A.push_back(a);
	}
	for (int i = 0; i < 10; i++)
	{
		int a;
		cin >> a;
		B.push_back(a);
	}
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());

	cout << A[9] + A[8] + A[7] << " " << B[9] + B[8] + B[7];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}