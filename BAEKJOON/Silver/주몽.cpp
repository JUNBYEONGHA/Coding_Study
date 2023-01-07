#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#define endl "\n"
using namespace std;

void Answer()
{
    int n, m, cnt = 0;
    cin >> n >> m;
    vector <int> armor(n);
    for (int i = 0; i < n; i++)
        cin >> armor[i];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (armor[i] + armor[j] == m)
                cnt++;
        }
    }
    cout << cnt << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}