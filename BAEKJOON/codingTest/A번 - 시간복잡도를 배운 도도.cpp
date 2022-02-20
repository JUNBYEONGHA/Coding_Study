#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>

#define endl "\n"
using namespace std;

void Answer()
{
	int N;
	cin >> N;
	int result = 0;
	string s;
	while (N--)
	{
		int temp = 0,length = 0;
		cin >> s;
		length = s.size();
		for (int i = 0; i < s.size(); i++)
		{
			if(length - i >= 3)
				if (s[i] == 'f' && s[i + 1] == 'o' && s[i + 2] == 'r')
					temp++;
			if (length - i >= 5)
				if (s[i] == 'w' && s[i + 1] == 'h' && s[i + 2] == 'i' && s[i + 3] == 'l' && s[i + 4] == 'e')
					temp++;
		}
		result = max(result, temp);
	}
	cout << result;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}