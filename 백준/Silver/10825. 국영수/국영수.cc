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

struct STU {
    string name;
    int kor, eng, math;
};

//정렬 함수에 사용할 함수
bool cmp(STU a, STU b) {
    //국어도 같고 영어도 같고 수학도 같으면 이름 오름차순으로 정렬
    if (a.kor == b.kor && a.eng == b.eng && a.math == b.math) return a.name < b.name;
    //국어 같고 영어 같다면 수학 내림차순으로 정렬
    if (a.kor == b.kor && a.eng == b.eng) return a.math > b.math;
    //국어점수 같다면 영어 오름차순으로 정렬
    if (a.kor == b.kor) return a.eng < b.eng;
    //기본적으로 국어 내림차순으로 정렬
    return a.kor > b.kor;
}

void Answer()
{
    int N;
    cin >> N;

    vector<STU> v(N);
    for (int i = 0; i < N; i++)
        cin >> v[i].name >> v[i].kor >> v[i].eng >> v[i].math;
    //sort함수 : v.begin() 부터 v.end를 cmp 함수대로 정렬
    sort(v.begin(), v.end(), cmp);

    for (int i = 0; i < N; i++)
        cout << v[i].name << endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}