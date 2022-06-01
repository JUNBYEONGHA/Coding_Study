#include<iostream>
#include<set>
#include<vector>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	set<string> S;
	vector<string> V;
	int N, M;
	cin >> N >> M;
	string K;
	for (int i = 0; i < N; i++)
	{
		cin >> K;
		S.insert(K);
	}
	for (int i = 0; i < M; i++)
	{
		cin >> K;
		if ((S.find(K) != S.end()))
		{
			V.push_back(* S.find(K));
		}
	}
	cout << V.size() << endl;
	sort(V.begin(), V.end());
	for (int i = 0; i < V.size(); i++)
	{
		cout << V[i] << endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}