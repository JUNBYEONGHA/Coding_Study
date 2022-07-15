#include<iostream>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
    int y, h, m;
    int Y, H, M;
    int ay = 0, ah = 0, am = 0;
    char c;
    cin >> y >> c >> h >> c >> m;
    cin >> Y >> c >> H >> c >> M;
    am = M - m;
    if (am < 0)
    {
        ah = -1;
        am += 60;
    }
    ah += (H - h);
    if (ah < 0)
    {
        ay = -1;
        ah += 60;
    }
    ay += (Y - y);
    if (ay < 0)
    {
        ay += 24;
    }
    if (ay < 10)
    {
        cout << "0" << ay << ":";
    }
    else
    {
        cout << ay << ":";
    }
    if (ah < 10)
    {
        cout << "0" << ah << ":";
    }
    else
    {
        cout << ah << ":";
    }
    if (am < 10)
    {
        cout << "0" << am ;
    }
    else
    {
        cout << am;
    }
}
    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}