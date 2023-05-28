#include<iostream>
#include<cmath>
#define endl "\n"
using namespace std;

void Answer()
{
	double n, w, h, s;
    cin >> n >> w >> h;
    while (n--)
    {
        cin >> s;
        if (s <= w || s <= h || s <= sqrt(w * w + h * h))
        {
            cout << "DA" << '\n';
        }
        else
            cout << "NE" << '\n';
    }
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}