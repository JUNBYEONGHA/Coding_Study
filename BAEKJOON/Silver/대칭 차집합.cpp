#include<iostream>
#include<set>
#define endl "\n"
using namespace std;

void Answer()
{
	set<int> A,B;
	int N, M, K, a = 0, b = 0;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		cin >> K;
		A.insert(K);
	}
	for (int i = 0; i < M; i++)
	{
		cin >> K;
		B.insert(K);
	}
	for (set<int>::iterator iter = A.begin(); iter != A.end(); iter++)
	{
		if (B.find(*iter) == B.end())
		{
			a++;
		}
	}
	for (set<int>::iterator iter = B.begin(); iter != B.end(); iter++)
	{
		if (A.find(*iter) == A.end())
		{
			b++;
		}
	}
	cout << a + b;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}