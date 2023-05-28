#include<iostream>
#include<queue>
#include<vector>

#define endl "\n"
using namespace std;

int arr[26];

void Input()
{
}
void Solution()
{
	string A;
	cin >> A;
	for (int i = 0; i < A.size(); i++)
	{
		arr[toupper(A[i]) - 'A']++;
	}
	int max = 0;
	char B;
	for (int i = 0; i < 26; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			B = i + 'A';
		}
	}
	int count = 0;
	for (int i = 0; i < 26; i++)
	{
		if (max == arr[i]) count++;
	}
	if (count > 1) cout << "?";
	else cout << B;
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