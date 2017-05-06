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
//map<char, double> etal;
//double value = 0;
//
//void precalc() {
//    etal['e'] = 12.7;
//    etal['t'] = 9.06;
//    etal['a'] = 8.17;
//    etal['o'] = 7.51;
//    etal['i'] = 6.97;
//    etal['n'] = 6.75;
//    etal['s'] = 6.33;
//    etal['h'] = 6.09;
//    etal['r'] = 5.99;
//    etal['d'] = 4.25;
//    etal['l'] = 4.03;
//    etal['c'] = 2.78;
//    etal['u'] = 2.76;
//    etal['m'] = 2.41;
//    etal['w'] = 2.36;
//    etal['f'] = 2.23;
//    etal['g'] = 2.02;
//    etal['y'] = 1.97;
//    etal['p'] = 1.93;
//    etal['b'] = 1.49;
//    etal['v'] = 0.98;
//    etal['k'] = 0.77;
//    etal['x'] = 0.15;
//    etal['j'] = 0.15;
//    etal['z'] = 0.07;
//    etal['q'] = 0.01;
//    etal[' '] = 0.19;
//
//    for(int i = 'a'; i <= 'z'; ++i)
//        value += etal[i] * log(etal[i]);
//    value += etal[' '] * log(etal[' ']);
//}
//
//double sqr(double x) {
//    return x * x;
//}
//
//double xi2(map<char, double> &a, map<char, double> &b) {
//    vector<double> d1, d2;
//    for(map<char, double>::iterator it = a.begin(); it != a.end(); ++it) {
//        d1.push_back(it->Y), d2.push_back(b[it->X]);
//    }
//    sort(ALL(d1)), sort(ALL(d2));
//    double xi = 0;
//    forn(i, sz(d1)) {
//        xi += sqr(d1[i] - d2[i]) / d1[i];
//    }
//    return xi;
//}
//
//void solve() {
//    int n;
//    cin >> n;
//    string s;
//    getline(cin, s);
//    int cnt = 0;
//    forn(iter, n) {
//        getline(cin, s);
//        map<char, double> mm;
//        forn(i, len(s)) {
//            mm[s[i]]++;
//        }
//        map<char, double> vv;
//        for(map<char, double>::iterator it = mm.begin(); it != mm.end(); ++it) {
//            double v = it->Y * 100. / len(s);
//            vv[it->X] = v;
//        }
//        double current = xi2(etal, vv);
//        if (current < 17.5) {
//            cout << iter + 1 << endl;
//            cnt++;
//        }
//    }
//    if (!cnt) cout << cnt << endl;
//}
//
//int main() {
//#ifdef _DEBUG
//    freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//   // freopen("input.txt", "r", stdin);
//    //freopen("output.txt", "w", stdout);
//#endif
//    precalc();
//    solve();
//#ifdef _DEBUG
//    cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//    return 0;
//}