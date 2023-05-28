#include<iostream>
#include<queue>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>

#define endl "\n"
using namespace std;

int Findseries(int N)
{
    int i = 666;
    int series = 0;
    string target;
    while (1)
    {
        target = to_string(i);
        for (int j = 0; j < target.length() - 2; j++)
            if (target[j] == '6' && target[j + 1] == '6' && target[j + 2] == '6')
            {
                series++;
                if (series == N)
                    return i;
                break;
            }
        i++;
    }
}

void Input()
{
	
}
void Solution()
{
    int N;
    cin >> N;
    cout << Findseries(N);
}
void Answer()
{
	Input();
	Solution();
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}