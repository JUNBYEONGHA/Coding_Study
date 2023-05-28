#include <iostream>
#include <string>
#include <sstream>
#define endl "\n"
using namespace std;

int N, K;
string str, num;
int arr[21];

void Answer()
{
    cin >> N >> K;
    cin >> str;
    istringstream sin(str);
    int idx = 0;
    while (getline(sin, num, ',')) {
        arr[idx++] = stoi(num);
    }

    for (int i = 0; i < K; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            arr[j] = arr[j + 1] - arr[j];
        }
    }

    for (int i = 0; i < N - K; i++) {
        if (i == N - K - 1) cout << arr[i];
        else cout << arr[i] << ",";
    }
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}