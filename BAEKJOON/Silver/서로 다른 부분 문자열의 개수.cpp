#include<iostream>
#include<set>
#define endl "\n"
using namespace std;

void Answer()
{
	set<string> S;
	string K;
	cin >> K;
	int Length = K.size();
	for (int i = 0; i < Length; i++)
	{
		string temp = "";
		for (int j = i; j < Length; j++)
		{
			temp += K[j];
			S.insert(temp);
		}
	}
	cout << S.size();
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}