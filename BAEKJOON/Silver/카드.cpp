#include<iostream>
#include<map>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int N;
	cin >> N;
	map < long long , int > card;
	long long input , result = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> input;
		card[input]++;
	}
	int MAX = 0;
	for (auto iter = card.begin(); iter != card.end(); iter++)
	{
		if (iter->second > MAX)
		{		
			result = iter->first;
			MAX = iter->second;
		}
	}
	cout << result;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}