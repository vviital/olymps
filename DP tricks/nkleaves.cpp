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
//#define ms2(x) memset(x, 97, sizeof(x))
//#define sz(x) ( (int) x.size() )
//#define len(x) ( (int) x.length() )
//#define ALL(x) x.begin(), x.end()
//#define pii pair<int, int>
//#define pll pair<ll, ll>
//#define pdd pair<double, double>
//
//struct segment {
//    ll a, b;
//    ll left;
//
//    segment() {
//        a = b = left = 0;
//    }
//
//    segment(ll a, ll b, ll left) {
//        this->a = a;
//        this->b = b;
//        this->left = left;
//    }
//};
//
//const int maxn = 1e+5 + 100;
//ll dp[15][maxn];
//ll sumw[maxn];
//ll sumwz[maxn];
//
//void addSegment(vector<segment> &hull, ll A, ll B) {
//    ll x = 0;
//    while(sz(hull)) {
//        segment cur = hull.back();
//        x = (A - cur.a + cur.b - B - 1) / (cur.b - B);
//        if (x <= cur.left) hull.pop_back();
//        else break;
//    }
//    hull.push_back(segment(A, B, x));
//}
//
//void solve() {
//    ms2(dp);
//    int n, k;
//    scanf("%d%d", &n, &k);
//    vector<int> w(n + 1);
//    forn(i, n) scanf("%d", &w[i + 1]);
//    for(int i = 1; i < sz(w); ++i) {
//        sumw[i] = sumw[i - 1] + w[i];
//        sumwz[i] = sumwz[i - 1] + w[i] * i;
//    }
//    dp[0][0] = 0;
////    for(int i = 1; i <= k; ++i) {
////        for(int j = 1; j <= n; ++j) {
////            for(int z = j; z >= 1; --z) {
////                ll val = dp[i - 1][z - 1] + sumwz[j] - sumwz[z - 1] - z * sumw[j] + z * sumw[z - 1];
//////                for(int t = z; t <= j; ++t) {
//////                    val += w[t] * (t - z);
//////                }
////                dp[i][j] = min(dp[i][j], val);
////            }
////        }
////    }
////    forn(i, k + 1) {
////        forn(j, n + 1) {
////            cout << dp[i][j] << " ";
////        }
////        cout << "\n";
////    }
////    cout << dp[k][n] << "\n";
////    return;
//    for(int i = 1; i <= k; ++i) {
//        int ptr = 0;
//        vector<segment> hull;
//        for(int j = 1; j <= n; ++j)
//            addSegment(hull, dp[i - 1][j - 1] - sumwz[j - 1] + j * sumw[j - 1], -j);
//        for(int j = 1; j <= n; ++j) {
//            while(ptr < sz(hull) && hull[ptr].left <= sumw[j]) ptr++; ptr--;
//            dp[i][j] = hull[ptr].a + hull[ptr].b * sumw[j] + sumwz[j];
//        }
//    }
////    forn(i, k + 1) {
////        forn(j, n + 1) {
////            cout << dp[i][j] << " ";
////        }
////        cout << "\n";
////    }
//    cout << dp[k][n] << "\n";
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
//    solve();
//#ifdef _DEBUG
//    cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//    return 0;
//}