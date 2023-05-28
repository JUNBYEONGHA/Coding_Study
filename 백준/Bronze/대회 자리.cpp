#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int k = 0;	cin >> k; 	
	while (k--) 
	{
		int p = 0, m = 0;
		cin >> p >> m;
		bool arr[501] = {};
		int cnt = 0;
		for (int i = 0; i < p; i++) 
		{
			int now = 0;
			cin >> now;
			if (arr[now]) 
				cnt++;			
			else arr[now] = 1;
		} 		cout << cnt << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}