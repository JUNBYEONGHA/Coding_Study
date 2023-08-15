#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <deque>
#include <queue>
#include <stack>
#include <cstring>
#include <sstream>
#include <set>
#include <map>
#include <climits>

#define endl "\n"
using LL = long long;
using namespace std;

int N, M;
int arr[100010];

void binarySearch(int key) {
    int start = 0;
    int end = N - 1;
    int mid;

    while (end >= start) {
        mid = (start + end) / 2;
        if (arr[mid] == key) {
            cout << 1 << "\n";
            return;
        }
        else if (arr[mid] > key) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    cout << 0 << "\n";
    return;
}

void Answer()
{
    cin >> N;
    int temp;

    for (int i = 0; i < N; i++) {
        cin >> temp;
        arr[i] = temp;
    }

    sort(arr, arr + N);

    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> temp;
        binarySearch(temp);
    }
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}