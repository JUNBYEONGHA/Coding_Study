#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <map>

#define endl "\n"
using LL = long long;
using namespace std;

vector<string> word;
bool alpha[26];
int N, K;
int result = 0;

int check()
{
	bool read;
	int readcnt = 0;
	for (int i = 0; i < word.size(); i++)
	{
		read = true;
		string s = word[i];
		for (int j = 0; j < s.size() ; j++)
		{
			if (alpha[s[j] - 'a'] == false)
			{
				read = false;
				break;
			}
		}

		if (read == true)
		{
			readcnt++;
		}
	}
	return readcnt;
}

void DFS(int indx, int cnt)
{
	if (cnt == K)
	{
		result = max(result, check());
	}
	for (int i = indx; i < 26; i++)
	{
		if (alpha[i] == true) continue;
		alpha[i] = true;
		DFS(i, cnt + 1);
		alpha[i] = false;
	}
}

void Answer()
{
	cin >> N >> K;
	while (N--)
	{
		string s;
		cin >> s;
		word.push_back(s);
	}
	alpha['a' - 'a'] = true;
	alpha['n' - 'a'] = true;
	alpha['t' - 'a'] = true;
	alpha['i' - 'a'] = true;
	alpha['c' - 'a'] = true;
	K -= 5;
	DFS(0, 0);
	cout << result;

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}