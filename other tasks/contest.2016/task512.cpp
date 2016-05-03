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
//const int maxn = 20;
//bool can[maxn][maxn];
//int countBits[1 << 11];
//int bitCount(int mask) {
//    int cnt = 0;
//    while(mask) {
//        if (mask & 1) {
//            cnt++;
//        }
//        mask >>= 1;
//    }
//    return cnt;
//}
//
//void precalc() {
//    forn(i, 1 << 11)
//        countBits[i] = bitCount(i);
//}
//
//int dp[maxn][maxn];
//
//void solve() {
//    int n = 10, m = 10, k = 10;
////    cin >> n >> m >> k;
////    if (k > (min(n, m))) k = min(n, m);
////    string s;
////    forn(i, n) {
////        cin >> s;
////        forn(j, m) can[i][j] = s[j] == 'Y';
////    }
//    vector<vector<int> > order(k + 1);
//    forn(i, 1 << 10) {
//        int cnt = bitCount(i);
//        if (cnt < sz(order)) order[cnt].pb(i);
//    }
//    int ans = 0;
//    forn(ord, sz(order)) {
//        for(int maskBoy : order[ord]) {
//            for(int maskGirl : order[ord]) {
//
//            }
//        }
//    }
//    forn(i, sz(order))
//        cerr << sz(order[i]) << "\n";
//}
//
//int main() {
//#ifdef _DEBUG
//    freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//#endif
//    solve();
//#ifdef _DEBUG
//    cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//    return 0;
//}