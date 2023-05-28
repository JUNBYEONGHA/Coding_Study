#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <map>
#include <deque>
#include <queue>

#define endl "\n"
using LL = long long;
using namespace std;

void Answer()
{
    int N;
    cin >> N;
    int idx1 = -1, idx2 = -1;
    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;

        if (s == "KBS1")
            idx1 = i;
        else if (s == "KBS2")
            idx2 = i;
    }
    int inOrder = idx1 > idx2 ? 1 : 0; //KBS1과 KBS2가 정렬되어있는가
    for (int i = 0; i < idx1; i++)
        cout << "1";
    for (int i = 0; i < idx1; i++)
        cout << "4";
    for (int i = 0; i < idx2 + inOrder; i++)
        cout << "1";
    //KBS1보다 한칸 아래
    for (int i = 0; i < idx2 + inOrder - 1; i++)
        cout << "4";
    cout << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}