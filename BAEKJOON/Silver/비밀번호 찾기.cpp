#include<iostream>
#include<map>
#define endl "\n"
using namespace std;

void Answer()
{
	map<string, string> m;
	int N, M;
	cin >> N >> M;
	string A, B;
	for (int i = 0; i < N; i++)
	{
		cin >> A >> B;
		m.insert({ A, B });
	}
	for (int i = 0; i < M; i++)
	{
		cin >> A;
		cout << m[A] << endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}