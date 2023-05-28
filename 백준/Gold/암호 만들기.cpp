#include<iostream>
#include<vector>
#include<algorithm>

#define endl "\n"
using namespace std;
int L, C;
void combine(int length,int index,vector<char> & password
,vector<char> print)
{
	if (length == L)
	{
		int gather = 0, Consonant = 0;
		for (auto a : print)
		{
			if (a == 'a' || a == 'e' || a == 'i' ||
				a == 'o' || a == 'u')
			{
				gather++;
			}
			else
			{
				Consonant++;
			}
		}
		if (gather < 1 || Consonant < 2) 
			return;
		for (auto a : print)
		{
			cout << a;
		}
		cout << endl;
		return;
	}
	for (int i = index; i < password.size(); i++)
	{
		print[length] = password[i];
		combine(length + 1, i + 1, password, print);
	}
}

void Answer()
{
	cin >> L >> C;
	vector<char> password(C);
	for (int i = 0; i < C; i++)
	{
		cin >> password[i];
	}
	sort(password.begin(), password.end());
	vector<char> print(L);
	combine(0, 0, password, print);
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}