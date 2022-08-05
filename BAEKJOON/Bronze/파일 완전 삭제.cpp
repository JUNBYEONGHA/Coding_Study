#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
    string a, b;
    int n;
    cin >> n;
    cin >> a >> b;
    if (n % 2 == 0)
    {
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] != b[i])
            {
                cout << "Deletion failed" << endl;
                return;
            }
        }
        cout << "Deletion succeeded" << endl;
    }
    else
    {
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == b[i])
            {
                cout << "Deletion failed" << endl;
                return;
            }
        }
        cout << "Deletion succeeded" << endl;
    }
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}