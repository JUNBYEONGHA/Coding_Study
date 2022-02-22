#include<iostream>
#include<vector>
#include<algorithm>

#define endl "\n"
using namespace std;

int M, N;

void combine(int length, vector<int> &list
,vector<int> print , int index)
{
	if (length == N)
	{
		for (auto A : print)
		{
			cout << A << " ";
		}
		cout << endl;
		return;
	}
	for (int i = index; i < list.size(); i++)
	{
		print[length] = list[i];
		combine(length + 1, list, print, i + 1);
	}
}

void Answer()
{
	cin >> M >> N;
	vector<int> list(M) ,print(N);
	for (int i = 0; i < M; i++)
		cin >> list[i];
	sort(list.begin(), list.end());
	combine(0, list, print, 0);
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}