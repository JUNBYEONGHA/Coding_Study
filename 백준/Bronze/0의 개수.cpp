#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        int a, b;
        cin >> a >> b;

        int cnt = 0;
        int sum = 0;

        for (int i = a; i <= b; i++) {
            string str = to_string(i);
            for (int j = 0; j < str.length(); j++) {
                if (str[j] == '0') {
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}