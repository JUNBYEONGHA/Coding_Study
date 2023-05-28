#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
#define endl "\n"
using namespace std;

void Answer()
{
	string s;
	int count = 0;
	map<string, int> tree;
	while (getline(cin,s))
	{
		count++;
		tree[s]++;
	}
	for (auto iter = tree.begin() ; iter != tree.end() ; iter++ )
	{
		cout << fixed;
		cout.precision(4);
		cout << iter->first << " " << iter->second * 100 / (double)count << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}