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
	int n;
	cin >> n;
	map<string, int> book;
	for (int i = 0; i < n; i++)
	{
		string a;
		cin >> a;
		book[a]++;
	}
	int temp = 0;
	string answer = "";
	for (auto iter = book.begin(); iter != book.end(); iter++)
	{
		if (temp < iter->second)
		{
			temp = iter->second;
			answer = iter->first;
		}
	}
	cout << answer;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}