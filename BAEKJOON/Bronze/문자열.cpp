#include<iostream>
#include<string>
#define endl "\n"
using namespace std;

void Answer()
{
	int N;
	cin >> N;
	string A;
	for (int i = 0; i < N; i++)
	{
		cin >> A;
		cout << A[0] << A[A.size()-1] << endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}