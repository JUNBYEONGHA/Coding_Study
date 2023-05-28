#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#define endl "\n"
using namespace std;

void Answer()
{
	cout << "SHIP NAME      CLASS          DEPLOYMENT IN SERVICE" << endl
		<< "N2 Bomber      Heavy Fighter  Limited    21        " << endl
		<< "J-Type 327     Light Combat   Unlimited  1         " << endl
		<< "NX Cruiser     Medium Fighter Limited    18        " << endl
		<< "N1 Starfighter Medium Fighter Unlimited  25        " << endl
		<< "Royal Cruiser  Light Combat   Limited    4         ";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}