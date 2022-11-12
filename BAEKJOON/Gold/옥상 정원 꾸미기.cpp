#include <iostream>
#include <stack>

#define endl "\n"
using namespace std;

stack<long long> s;
long long temp, res;
int n;


void Answer()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        while (!s.empty() && s.top() <= temp) {
            s.pop();
        }
        s.push(temp);
        res += s.size() - 1;
    }
    cout << res;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Answer();
}