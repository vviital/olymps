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
//int ask(int a) {
//    cout << a << endl;
//    string res;
//    cin >> res;
//    return res == "YES";
//}
//
//vector<int> divs[10010];
//vector<int> q;
//
//void solve() {
//    for(int x : q) {
//        if (ask(x)) break;
//    }
//}
//
//vector<int> getDivs(int x) {
//    set<int> s;
//    for(int i = 2; i * i <= x; ++i) {
//        if (x % i == 0) s.insert(i), s.insert(x / i);
//    }
//    s.insert(x);
//    return vector<int>(ALL(s));
//}
//
//void precalc() {
//    for(int i = 2; i <= 10000; ++i) {
//        divs[i] = getDivs(i);
//    }
//    vector<int> conds;
//    for(int i = 100; i <= 10000; ++i) conds.push_back(i);
//    set<int> was;
//    for(int i = 2; i <= 100; ++i) {
//        int now = 1e+9;
//        for(int x : divs[conds[0]]) {
//            if (!was.count(x)) {
//                now = x;
//                q.push_back(x);
//                was.insert(x);
//                break;
//            }
//        }
//        if (sz(conds) == 0) break;
//        vector<int> cur;
//        for(int num : conds) {
//            if (num % now) {
//                cur.push_back(num - now);
//                if (num - now < 0) exit(123);
//            }
//        }
//        conds = cur;
//    }
//    for(int x : q) cerr << x << " ";
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
//    precalc();
//    int t;
//    cin >> t;
//    while(t--) solve();
//#ifdef _DEBUG
//    cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//    return 0;
//}