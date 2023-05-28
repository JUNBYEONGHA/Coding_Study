#include <iostream>
#include <vector>

#define endl "\n"
using namespace std;

void Answer()
{
	int N, M;
	cin >> N >> M;
	vector<string> image(N);
	for (int i = 0; i < N; i++)
	{
		cin >> image[i];
	}
	bool check = true;
	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;

		for (int j = 0; j < M; j++)
		{
			if (image[i][j] != s[j * 2] || image[i][j] != s[j * 2 + 1])
			{
				check = false;
				break;
			}
		}
	}
	if (check) cout << "Eyfa";
	else cout << "Not Eyfa";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}