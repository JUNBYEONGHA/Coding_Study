#include<iostream>
#include<queue>
#include<string>
#include<vector>

#define endl "\n"
using namespace std;

string A, B;

void Input()
{
	cin >> A >> B;
}
void Solution()
{
	int a, b;
	string temp = "";
	for (int i = A.size()-1; i >= 0; i--)
	{
		temp += A[i];
	}
	a = stoi(temp);
	temp = "";
	for (int i = B.size() - 1; i >= 0; i--)
	{
		temp += B[i];
	}
	b = stoi(temp);
	if (a > b) cout << a;
	else cout << b;
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