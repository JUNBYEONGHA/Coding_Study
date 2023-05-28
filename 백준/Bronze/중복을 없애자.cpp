#include <iostream>
#include <vector>
#include <algorithm>

#define endl "\n"
using namespace std;


void Answer()
{
	while (true)
	{
		vector<int> result;
		int N; cin >> N; if (N == 0) break;
		for (int i = 0; i < N; i++)
		{
			int a; cin >> a; 
			result.push_back(a);
		}
		int temp = result[0];
		cout << result[0] << " ";
		for (int i = 1; i < result.size(); i++)
		{
			if (temp != result[i])
			cout << result[i] << " ";
			temp = result[i];
		}
		cout << "$" << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}