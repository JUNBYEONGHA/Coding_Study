#include<iostream>
#include<vector>
#define endl "\n"
using namespace std;

void Answer()
{
	int N, M, result = 0;
	cin >> N >> M;
	string s;
	cin >> s;
    for (int i = 0; i < M; i++)
    {
        int k = 0;
        if (s[i] == 'O')
            continue;
        else
        {
            while (s[i + 1] == 'O' && s[i + 2] == 'I')
            {
                k++;
                if (k == N)
                {
                    k--; 
                    result++;
                }
                i += 2;
            }
            k = 0;
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