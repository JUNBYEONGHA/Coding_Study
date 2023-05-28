#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

#define endl "\n"
using namespace std;

void Answer()
{
	priority_queue<int,vector<int>,greater<int>> PQ;
	unsigned int num , A;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cin >> A;
		if (A == 0)
		{
			if (PQ.empty())
			{
				cout << "0" << endl;
			}
			else
			{
				cout << PQ.top() << endl;
				PQ.pop();
			}
		}
		else
		{
			PQ.push(A);
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}