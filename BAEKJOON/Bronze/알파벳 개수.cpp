#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define endl "\n"
using namespace std;

int arr[26];

void Answer()
{
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		arr[s[i] - 'a'] ++;
	}
	for (int i = 0; i < 26; i++)
	{
		cout << arr[i] << ' ';
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}