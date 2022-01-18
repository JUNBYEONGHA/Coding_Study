#include<iostream>
#include<queue>
#include<vector>

#define endl "\n"
using namespace std;
int alpha[26];

void Input()
{
}
void Solution()
{
	string A;
	int index = 0;
	cin >> A;
	for (int i = 0; i < 26; i++)
	{
		alpha[i] = -1;
	}
	for (int i = 0; i < A.size(); i++)
	{
		if(alpha[A[i] - 'a'] == -1)
			alpha[A[i] - 'a'] = i;
	}
	for (int i = 0; i < 26; i++)
	{
		cout << alpha[i] << " ";
	}
}
void Answer()
{
	Input();
    Solution();
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}