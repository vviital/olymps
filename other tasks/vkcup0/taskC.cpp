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
//int dist(string &a, string &b) {
//    int ans = 0;
//    forn(i, len(a)) ans += a[i] != b[i];
//    return ans;
//}
//
//void next(string &x) {
//    x.back()++;
//    int ptr = 5;
//    while(ptr > 0 && x[ptr] > '9') {
//        x[ptr] = '0';
//        x[--ptr]++;
//    }
//}
//
////int stupid(vector<string> &arr) {
////    set<string> was(ALL(arr));
////    int ans = 6;
////    string cur = "000000";
////    if (sz(arr) != 1) {
////        for (int i = 0; i < 1e+6; ++i) {
////            if (ans == 0) break;
////            int m1, m2;
////            if (!was.count(cur)) {
////                forn(j, sz(arr)) {
////                    int d = dist(arr[j], cur);
////                    temp.push_back(d);
////                }
////            }
////            if (sz(arr))
////                for (auto x : temp) {
////
////                }
////            next(cur);
////            //cerr << cur << "\n";
////        }
////    }
////    cerr << cur << "\n";
////    return ans;
////}
//
//void solve() {
//    vector<string> arr;
//    int n;
//    cin >> n;
//    forn(i, n) {
//        string s;
//        cin >> s;
//        arr.push_back(s);
//    }
////    stupid(arr);
////    return;
//    set<int> d;
//    forn(i, n) forn(j, n) {
//            if (i != j) {
//                d.insert(dist(arr[i], arr[j]));
//            }
//        }
//    int ans = 6;
//    if (sz(arr) != 1) {
//        ans = (*d.begin());
//        ans = (ans - 1) / 2;
//    }
//    cout << ans << "\n";
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