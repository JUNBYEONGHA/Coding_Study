#include<iostream>
#include<queue>
#include<vector>

#define endl "\n"
using namespace std;
int A, B, C;

void Input()
{
	cin >> A >> B >> C;
}
void Solution()
{
	cout << (A + B) % C << endl;
	cout << ((A % C) + (B % C)) % C << endl;
	cout << (A*B) % C << endl;
	cout << ((A % C) * (B % C)) % C << endl;
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