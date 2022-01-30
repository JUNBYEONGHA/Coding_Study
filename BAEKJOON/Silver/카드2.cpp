#include<iostream>
#include<queue>
#include<string>

#define endl "\n"
using namespace std;

void Answer()
{
	int N;
	cin >> N;
	queue<int> q;
	for (int i = 1; i <= N; i++)
		q.push(i);
	if (N == 1) cout << "1";
	else
		while (true)
		{
			q.pop();
			if (q.size() == 1)
			{
				cout << q.front();
				break;
			}
			q.push(q.front());
			q.pop();
		}
	
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}