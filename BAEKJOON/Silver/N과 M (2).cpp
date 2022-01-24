#include<iostream>
#include<queue>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>

#define endl "\n"
using namespace std;
int maxLength;
void DFS(int length,int index, vector<bool>&visit ,vector<int>printV)
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

	for (int i = index; i < visit.size(); i++)
	{
		if (!visit[i])
		{
			visit[i] = true;
			printV.push_back(i);
			DFS(length + 1,i,visit, printV);
			printV.pop_back();
			visit[i] = false;
		}
	}
}

void Input()
{
	int A, B;
	cin >> A >> B;
	maxLength = B;
	vector<bool>visit(A+1);
	vector<int>printV;
	DFS(0,1,visit,printV);
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