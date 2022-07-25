#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>
#include<string>
#include<set>
#define endl "\n"
using namespace std;

void Answer()
{	
	int a, b;
	cin >> a >> b;
	set<int> S;
	int n;
	for (int i = 0; i < a; i++)
	{
		cin >> n;
		S.insert(n);
	}
	for (int i = 0; i < b; i++)
	{
		cin >> n;
		auto iter = S.find(n);
		if (iter == S.end())
		{
			continue;
		}
		else
		{
			S.erase(iter);
		}
	}
	cout << S.size() << endl;
	for (auto num : S)
		cout << num << " ";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}