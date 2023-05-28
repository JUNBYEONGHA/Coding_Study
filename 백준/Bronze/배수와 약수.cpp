#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

#define endl "\n"
using namespace std;

void Input()
{
   
}
void Solution()
{
	int A, B;
	while (true)
	{
		cin >> A >> B;
		if (A == 0 && B == 0)
			break;
		if (B % A == 0) cout << "factor" << endl;
		else if (A % B == 0) cout << "multiple" << endl;
		else cout << "neither" << endl;
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