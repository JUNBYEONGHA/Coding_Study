#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<string>
#define endl "\n"
using namespace std;

int n;
set<string> S;

bool Check(string& word)
{
	for (string temp : S)
	{
		if (word.size() != temp.size())
			continue;
		for (int i = 0; i < word.size() ; i++)
		{
			if (temp.compare(word) == 0) return true;
			rotate(word.begin(), word.begin() + 1, word.end());
		}
	}
	return false;
}

void Answer()
{	
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string word;
		cin >> word;
		if (!Check(word))
			S.insert(word);
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