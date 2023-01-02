#include <iostream>
#include <string>
#include <algorithm>
#define endl "\n"
using namespace std;


void Answer()
{
    int T;        
    double weight;
    string unit;
    cin >> T;
    while (T--)
    {
        cin >> weight >> unit;
        double newWeight;
        if (unit == "kg") {
            unit = "lb";
            newWeight = weight * 2.2046;
        }
        else if (unit == "lb") {
            unit = "kg";
            newWeight = weight * 0.4536;
        }
        else if (unit == "l") {
            unit = "g";
            newWeight =  weight * 0.2642;
        }
        else {
            unit = "l";
            newWeight = weight * 3.7854;
        }
        cout << fixed;
        cout.precision(4);
        cout << newWeight << " " << unit << endl;
    }
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}