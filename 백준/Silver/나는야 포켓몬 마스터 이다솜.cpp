#include<iostream>
#include<map>
#include<string>
#define endl "\n"
using namespace std;

void Answer()
{
	map<string , string> S;
	int N , M , answer = 0;
	cin >> N >> M;
	string K;
	for (int i = 1; i <= N; i++)
	{
		cin >> K;
		S.insert({ K , to_string(i) });
		S.insert({to_string(i) , K});
	}
	for (int i = 0; i < M; i++)
	{
		cin >> K;
		cout << S.find(K)->second << endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}