#include<iostream>
#include<set>
#define endl "\n"
using namespace std;



void Answer()
{
	set<int> S;
	int N , K;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> K;
		S.insert(K);
	}
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> K;
		if (S.find(K) == S.end())
		{
			cout << 0 << " ";
		}
		else
		{
			cout << 1 << " ";
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