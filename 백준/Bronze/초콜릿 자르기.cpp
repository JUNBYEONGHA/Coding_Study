#include <iostream>
#include <string>

#define endl "\n"
using namespace std;

void Answer()
{
    int N, M;
    cin >> N >> M;
    cout << N * M - 1 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    Answer();
}