#include <iostream>

#define endl "\n"
using namespace std;

int alpha[26];

void Answer()
{
	int N;
	cin >> N;
	string name;
	for (int i = 0; i < N; i++)
	{
		cin >> name;
		alpha[name[0] - 'a']++;
	}
	bool check = false;
	for (int i = 0; i < 26; i++)
	{
		if (alpha[i] >= 5)
		{
			cout << (char)(i + 'a');
			check = true;
		}
	}
	if (!check)
	{
		cout << "PREDAJA";
	}

}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
}