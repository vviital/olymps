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
//#define ms2(x) memset(x, 1, sizeof(x))
//#define sz(x) ( (int) x.size() )
//#define len(x) ( (int) x.length() )
//#define ALL(x) x.begin(), x.end()
//#define pii pair<int, int>
//#define pll pair<ll, ll>
//#define pdd pair<double, double>
//#define strout(arr, n) forn(i, n) cout << arr[i] << "\t"; cout << "\n";
//
//const int maxn = 8010;
//const int maxm = 810;
//ll dp[maxm][maxn];
//ll sum[maxn];
//
//ll getsum(int i, int j) {
//    return sum[j] - sum[i - 1];
//}
//
//inline void calculate(int d, int L, int R, int optL, int optR) {
//    if (L > R) return;
//    int m = (L + R) >> 1;
//
//    int opt = optL;
//
//    for(int i = optL; i <= min(m, optR); ++i) {
//        ll curval = dp[d - 1][i - 1] + (m - i + 1) * getsum(i, m);
//        if (curval < dp[d][m]) {
//            dp[d][m] = curval;
//            opt = i;
//        }
//    }
//
//    calculate(d, L, m - 1, optL, opt);
//    calculate(d, m + 1, R, opt, optR);
//}
//
//void solve() {
//    ms2(dp);
//    dp[0][0] = 0;
//
//    int l, g;
//    scanf("%d%d", &l, &g);
//    forn(i, l) scanf("%lld", &sum[i + 1]);
//    g = min(g, l);
//    for(int i = 1; i <= l; ++i) sum[i] += sum[i - 1];
//    for(int i = 1; i <= g; ++i) {
//        calculate(i, 1, l, 1, l);
//    }
//    cout << dp[g][l] << "\n";
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