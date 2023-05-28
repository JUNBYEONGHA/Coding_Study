#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	string s;
	string answer = "";
	for (int i = 0; i < 5; i++)
	{
		cin >> s;
		for (int j = 0; j < s.size() - 2; j++)
		{
			if (s[j] == 'F' && s[j + 1] == 'B' && s[j + 2] == 'I')
			{
				answer += to_string(i + 1);
				break;
			}
		}
	}
	if(answer.size() == 0)
	{
		cout << "HE GOT AWAY!";
	}
	else
	{
		for (int i = 0; i < answer.size(); i++)
		{
			cout << answer[i] << ' ';
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}