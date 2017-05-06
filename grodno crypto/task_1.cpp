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
//bool can[1000];
//map<char, double> etal;
//
//void precalc() {
//    for(char i = 'a'; i <= 'z'; ++i) can[i] = true;
//    for(char i = 'A'; i <= 'Z'; ++i) can[i] = true;
//    can[' '] = true;
//    can[','] = true;
//    can['.'] = true;
//    can[';'] = true;
//    can[':'] = true;
//    can['('] = true;
//    can[')'] = true;
////    can['!'] = true;
//    can['\''] = true;
//    can['-'] = true;
//
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
//    double all = 0;
//    for(int i = 'a'; i <= 'z'; ++i)
//        all += etal[i];
//    for(int i = 'a'; i <= 'z'; ++i)
//        etal[i] /= all;
//}
//
//int toInt(char a) {
//    if (a >= '0' && a <= '9') return a - '0';
//    return a - 'A' + 10;
//}
//
//int toInt(char a, char b) {
//    return toInt(a) * 16 + toInt(b);
//}
//
//vector<int> getText(string &s) {
//    vector<int> res;
//    for(int i = 0; i < len(s); i += 2) {
//        res.push_back(toInt(s[i], s[i + 1]));
//    }
//    return res;
//}
//
//vector<int> best;
//double xi = 1e+9;
//vector<int> text;
//vector<vector<int> > conds;
//
//double sqr(double x) {
//    return x * x;
//}
//
//double xi2(map<char, double> &a, map<char, double> &b) {
//    vector<double> d1, d2;
//    forn(i, 26) d1.push_back(a[i + 'a']), d2.push_back(b[i + 'a']);
//    sort(ALL(d1)), sort(ALL(d2));
//    double xi = 0;
//    forn(i, sz(d1)) {
//        xi += sqr(d1[i] - d2[i]) / d1[i];
//    }
//    return xi;
//}
//
//void update(vector<int> key) {
//    map<char, double> mm;
//    int cnt = 0;
//    int countAp = 0;
//    for(int i = 0; i < sz(text); i += sz(key)) {
//        for(int j = 0; j < sz(key) && i + j < sz(text); ++j) {
//
//            char val = text[i + j] ^ key[j];
//            if (val == '\'') countAp++;
//            if (val >= 'A' && val <= 'Z') val = val - 'A' + 'a';
//            if (etal.count(val))
//                mm[val]++, cnt++;
//        }
//    }
//    if (countAp >= 5)
//        return;
//    forn(i, 26) mm[i + 'a'] /= cnt;
//    double curxi = xi2(etal, mm);
//    if (curxi < xi) {
//        xi = curxi;
//        best = key;
//    }
//}
//
//void print(int ch) {
//    if (ch <= 9) cout << ch;
//    else cout << (char)('A'+ ch - 10);
//}
//
//void rec(int cur, int level, vector<int> &key) {
//    if (cur == level) {
//        update(key);
//        return;
//    }
//    forn(i, sz(conds[cur])) {
//        key.push_back(conds[cur][i]);
//        rec(cur + 1, level, key);
//        key.pop_back();
//    }
//}
//void solve(int k) {
//    conds.clear();
//    conds.resize(k);
//    forn(start, k) {
//        forn(value, 1 << 8) {
//            bool ok = true;
//            for(int i = start; i < sz(text); i += k) {
//                if (can[text[i] ^ value]) continue;
//                ok = false;
//                break;
//            }
//            if (ok) conds[start].push_back(value);
//        }
//    }
//    forn(i, sz(conds)) {
//        if (sz(conds[i])) continue;
//        return;
//    }
//    vector<int> key;
//    rec(0, k, key);
//}
//
//void solve() {
//    string s;
//    cin >> s;
//    text = getText(s);
//    for(int i = 1; i <= min(sz(text), 13); ++i) {
//        solve(i);
//    }
//    if (sz(best) == 0) exit(123);
//    vector<int> ans(sz(text));
//    for(int i = 0; i < sz(text); i += sz(best)) {
//        for(int j = 0; j < sz(best) && j + i < sz(text); ++j) {
//            ans[i + j] = text[i + j] ^ best[j];
//        }
//    }
//   // cout << xi << "\n";
//   // update(best);
////    cout << sz(best) << endl;
//    forn(i, sz(best)) {
//        print(best[i] / 16);
//        print(best[i] % 16);
//    }
//    cout << endl;
//    forn(i, sz(ans))
//        cout << (char)ans[i];
//    cout << endl;
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