#include<iostream>
#include<vector>
#define endl "\n"
using namespace std;

int Alpha[26][200001];

void Answer()
{
	string S;
	char A;
	int T , B, C;
	cin >> S;
	for (int i = 0; i < 26; i++)
	{
		char alpha = i + 97;
		Alpha[i][0] = ((S[0] == alpha) ? 1 : 0);
		for (int j = 1; j < S.size(); j++)
		{
			Alpha[i][j] = Alpha[i][j - 1] + ((S[j] == alpha) ? 1 : 0);
		}
	}
	cin >> T;
	while (T--)
	{
		cin >> A >> B >> C;
		cout << Alpha[A - 'a'][C] - Alpha[A - 'a'][B - 1] << endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}