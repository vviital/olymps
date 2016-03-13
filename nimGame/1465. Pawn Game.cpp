////http://acm.timus.ru/problem.aspx?space=1&num=1465&locale=en
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
//const int maxn = 1e+7;
//int dp[maxn];
//
//int getMex(vector<int> &m) {
//    forn(i, sz(m)) {
//        if (i != m[i]) return i;
//    }
//    return sz(m);
//}
//
//int rec(int n) {
//    if (dp[n] != -1) return dp[n];
//    if (n <= 0) return 0;
//    vector<int> cur;
//    cur.push_back(rec(n - 2));
//    for(int i = 2; i < n; ++i) {
//        int val = rec(i - 2) ^ rec(n - i - 1);
//        cur.push_back(val);
//    }
//    sort(ALL(cur));
//    cur.erase(unique(ALL(cur)), cur.end());
//    return dp[n] = getMex(cur);
//}
//
//void solve() {
////    rec(100);
////    forn(i, 100) {
////        cout << i << "\t";
////    }
////    cout << endl;
////    forn(i, 100) {
////        cout << dp[i] << "\t";
////    }
////    return;
//    int n;
//    cin >> n;
//    if (n >= 52) {
//        n -= 52;
//        n %= 34;
//        n += 52;
//    }
//    int res = rec(n);
//    if (res == 0) {
//        cout << "Black\n";
//    } else {
//        cout << "White\n";
//    }
////    vector<int> dif;
////    for(int i = 1; i <= 1000; ++i) {
////        int ans = rec(i);
////        if (ans == 0) {
////            dif.push_back(i);
////            cout << i << "\t" << ans << "\n";
////        }
////    }
////    forn(i, sz(dif) - 1) {
////        cout << dif[i + 1] - dif[i] << "\n";
////    }
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
//    ms1(dp);
//    solve();
//#ifdef _DEBUG
//    cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//    return 0;
//}