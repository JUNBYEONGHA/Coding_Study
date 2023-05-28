#include<iostream>
#include<cmath>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	int index = 1 ,result = 0;
	while (true)
	{
		int L, P, V;
		cin >> L >> P >> V;
		if ((L | P | V) == 0)
			break;
		result = V / P * L;
		if (V - V / P * P < L)
			result += (V - V / P * P);
		else
			result += L;
		cout << "Case " << index << ": " << result << endl;
		index++;
	}
	
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}