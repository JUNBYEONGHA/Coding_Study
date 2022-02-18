#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<tuple>

#define endl "\n"
using namespace std;

void Answer()
{
	int N;
	int k;
	while (cin >> N)
	{
		int ans = 1;
		k = 1;
		while (true)
		{
			if (ans % N == 0)
				break;
			else
			{
				k++;
				ans = ans * 10 + 1;
				ans %= N;
			}
		}
		cout << k << endl;
	}

}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}