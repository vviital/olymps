////http://informatics.mccme.ru/mod/statements/view3.php?id=298&chapterid=649#1
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
//vector<pll> seg;
//string a = "Stan wins.\n";
//string b = "Ollie wins.\n";
//
//void rec(ll n, int step) {
//    if (n <= 1) {
//        reverse(ALL(seg));
//        return;
//    }
//    ll oldn = n;
//    if (step % 2 == 0) {
//        n = (n + 8) / 9 - 1;
//        seg.push_back(mp(n + 1, oldn));
//        rec(n + 1, step ^ 1);
//    } else {
//        n = (n + 1) / 2;
//        seg.push_back(mp(n, oldn));
//        rec(n, step ^ 1);
//    }
//}
//
//void answer(string s) {
//    cout << s;
//    exit(0);
//}
//
//void solve() {
//    ll n;
//    cin >> n;
//    rec(n, 0);
//    for(auto x : seg) {
//        cerr << x.X << " " << x.Y << "\n";
//    }
//    if (sz(seg) & 1) {
//        answer(a);
//    } else {
//        answer(b);
//    }
//}
//
//set<ll> res;
//int cnt = 0;
//
//void count(ll n) {
//    if (res.count(n)) return;
//    if (n <= 5e+9) {
//        res.insert(n);
//    } else return;
//    count(n * 2);
//    count(n * 3);
//    count(n * 5);
//    count(n * 7);
//}
//
//int main() {
//#ifdef _DEBUG
//    freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//    //freopen("input.txt", "r", stdin);
//    /*freopen("output.txt", "w", stdout);*/
//#endif
////    count(1);
////    cout << sz(res) << "\n";
////    for(ll x : res) {
////        cout << x << "\n";
////    }
////    return 0;
//    solve();
//#ifdef _DEBUG
//    cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//    return 0;
//}