//#define _CRT_SECURE_NO_WARNINGS
//
//#include <iostream>
//#include <sstream>
//#include <fstream>
//#include <iomanip>
//#include <string>
//#include <algorithm>
//#include <cmath>
//#include <ctime>
//#include <vector>
//#include <stack>
//#include <map>
//#include <set>
//#include <queue>
//#include <cstring>
//#include <bitset>
//#include <cstdio>
//#include <cstdlib>
//#include <cassert>
//
//using namespace std;
//
//typedef long long ll;
//typedef double db;
//typedef long double ldb;
//typedef string str;
//
//#define forn(i, n) for(int i = 0; i < n; ++i)
//#define INF 1e+9
//#define EPS 1e-9
//#define PI 3.1415926535897932384626433832795
//#define mp(a, b) make_pair(a, b)
//#define pb(a) push_back(a)
//#define X first
//#define Y second
//#define ms(x) memset(x, 0, sizeof(x))
//#define ms1(x) memset(x, -1, sizeof(x))
//#define sz(x) ( (int) x.size() )
//#define len(x) ( (int) x.length() )
//#define ALL(x) x.begin(), x.end()
//#define pii pair<int, int>
//#define pll pair<ll, ll>
//#define pdd pair<double, double>
//
//double best = -1e+18;
//double need;
//vector<int> temp;
//
//vector<double> curval;
//
//void update(double x) {
//    if (fabs(x - need) < fabs(need - best))
//        best = x;
//}
//
//void rec(vector<double> cond) {
//    if (sz(cond) == 1) {
//        //cerr << cond.back() << "\n";
//        update(cond.back());
//        return;
//    }
//    forn(i, sz(cond)) {
//        vector<double> temp;
//        forn(j, sz(cond))
//            if (i != j) temp.push_back(cond[j]);
//        rec(temp);
//    }
//    for(int i = 0; i < sz(cond); ++i) for(int j = i + 1; j < sz(cond); ++j) {
//            double c1 = cond[i] + cond[j];
//            double c2 = (cond[i] * cond[j]) / (cond[i] + cond[j]);
//            vector<double> temp;
//            forn(z, sz(cond)) if (z != i && z != j) temp.push_back(cond[z]);
//            temp.push_back(c1);
//            rec(temp);
//            temp.back() = c2;
//            rec(temp);
//        }
//}
//
//void solve() {
//    int n;
//    cin >> n >> need;
//    vector<double> res(n);
//    forn(i, n) cin >> res[i];
//    rec(res);
//    printf("%.15lf\n", best);
//}
//
//int main() {
//#ifdef _DEBUG
//    freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//    //freopen("input.txt", "r", stdin);
//    //freopen("output.txt", "w", stdout);
//#endif
//    solve();
//#ifdef _DEBUG
//    cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//    return 0;
//}