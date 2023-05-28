#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
#include<limits.h>

#define endl "\n"
using namespace std;
int print[14];
int N;

void DFS(int length,int index,vector<int> & roto)
{
	if (length == 6)
	{
		for (int i = 0; i < 6; i++)
		{
			cout << print[i] << " ";
		}
		cout << endl;
		return;
	}
	else
	{
		for (int i = index; i < N; i++)
		{
			print[length] = roto[i];
			DFS(length + 1, i + 1, roto);
		}
	}
}

void Answer()
{
	vector<int> roto(14);
	while (cin >> N)
	{
		if (N == 0) break;
		for (int i = 0; i < N; i++)
		{
			cin >> roto[i];
		}
		DFS(0,0,roto);
		cout << endl;
	}

}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}