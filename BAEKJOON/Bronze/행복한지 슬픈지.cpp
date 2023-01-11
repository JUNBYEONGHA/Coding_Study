#include <iostream>
#include <string>

#define endl "\n"
using namespace std;

void Answer()
{
    string k;
    int happy = 0, sad = 0;
    getline(cin, k);
    for (int i = 0; i < k.size() - 2; i++)
    {
        if (k[i] == ':' && k[i + 1] == '-')
        {
            if (k[i + 2] == ')')
                happy++;
            else
                sad++;
        }
    }
    if (happy == 0 && sad == 0)
        cout <<"none" << endl;
    else if (happy == sad && happy)
        cout << "unsure" << endl;
    else
        cout << (happy > sad ? "happy" : "sad") << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}