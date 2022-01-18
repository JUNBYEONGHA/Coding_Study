#include<iostream>
#include<queue>
#include<string>
#include<vector>

#define endl "\n"
using namespace std;

string arr[8] = { "c=","c-","dz=","d-","lj","nj","s=","z=" };
string A;

void Input()
{
	cin >> A;
}
void Solution()
{
	int idx;
	for (int i = 0; i < 8; i++)
	{
		while (true)
		{
			idx = A.find(arr[i]);
			if (idx == string::npos)
				break;
			A.replace(idx, arr[i].length(), "A");
		}
	}
	cout << A.size();
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