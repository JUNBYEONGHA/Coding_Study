#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	string A, B;
	cin >> A >> B;
	int m, M;
	for (int i = 0; i < A.size(); i++)
	{
		if (A[i] == '6') A[i]--;
	}
	for (int i = 0; i < A.size(); i++)
	{
		if (B[i] == '6') B[i]--;
	}
	m = stoi(A) + stoi(B);
	for (int i = 0; i < A.size(); i++)
	{
		if (A[i] == '5') A[i]++;
	}
	for (int i = 0; i < A.size(); i++)
	{
		if (B[i] == '5') B[i]++;
	}
	M = stoi(A) + stoi(B);
	cout << m << " " << M;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}