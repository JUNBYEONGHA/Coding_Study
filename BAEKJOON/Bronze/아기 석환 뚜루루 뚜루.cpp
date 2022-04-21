#include<iostream>

#define endl "\n"
using namespace std;

void Answer()
{
    int n;
    cin >> n;
    if (n % 14 == 1 || n % 14 == 13) cout << "baby";
    else if (n % 14 == 2 || n % 14 == 0) cout << "sukhwan";
    else if (n % 14 == 5) cout << "very";
    else if (n % 14 == 6) cout << "cute";
    else if (n % 14 == 9) cout << "in";
    else if (n % 14 == 10) cout << "bed";
    else if (n % 14 == 4 || n % 14 == 8 || n % 14 == 12) {
        if (n < 14) cout << "turu";
        else if (n < 28) cout << "tururu";
        else if (n < 42) cout << "turururu";
        else if (n < 56) cout << "tururururu";
        else cout << ("tu+ru*") << (n / 14 + 1);
    }
    else {
        if (n < 14) cout << "tururu";
        else if (n < 28) cout << "turururu";
        else if (n < 42) cout << "tururururu";
        else cout << ("tu+ru*") << (n / 14 + 2);
    }
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}