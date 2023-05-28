#include <iostream>
#include <algorithm>
#include <queue>
#include <string>

#define endl "\n"
using namespace std;

void Answer()
{
	int n;
	cin >> n;
	queue<int> card;
	for (int i = 1; i <= n; i++)
	{
		card.push(i);
	}
	while (card.size() != 1)
	{
		cout << card.front() << " ";
		card.pop();
		card.push(card.front());
		card.pop();
	}
	cout << card.front();
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}