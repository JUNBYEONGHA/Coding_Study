#include<iostream>
#include<queue>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>

#define endl "\n"
using namespace std;
int maxLength, A;
void DFS(int length,int index, vector<int>printV)
{
	if (length == maxLength)
	{
		for (int A : printV)
		{
			cout << A << " ";
		}
		cout << endl;
		return;
	}

	for (int i = index; i <= A; i++)
	{
		printV.push_back(i);
		DFS(length + 1,i, printV);
		printV.pop_back();
	}
}
void Input()
{
	int B;
	cin >> A >> B;
	maxLength = B;
	vector<int>printV;
	DFS(0,1,printV);
}
void Solution()
{

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