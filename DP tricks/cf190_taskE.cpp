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
//const int maxn = 4010;
//int sum[maxn][maxn];
//int dp[810][maxn];
//
//int getint() {
//    int ans = 0;
//    bool ok = false;
//    while(true) {
//        char ch = getchar();
//        if (ch >= '0' && ch <= '9') ans = ans * 10 + ch - '0', ok = true;
//        else {
//            if (ok) break;
//        }
//    }
//    return ans;
//}
//
//void calculate(int d, int L, int R, int optL, int optR) {
//    if (R < L) return;
//    int m = (L + R) >> 1;
//
//    int tdp = 1 << 30;
//    int opt = optL;
//    for(int i = optL; i <= optR; ++i) {
//        int curans = dp[d - 1][i - 1] + sum[m][m] - sum[i - 1][m] - sum[m][i - 1] + sum[i - 1][i - 1];
//        if (curans < tdp) {
//            tdp = curans;
//            opt = i;
//        }
//    }
//    dp[d][m] = tdp;
//    calculate(d, L, m - 1, optL, opt);
//    calculate(d, m + 1, R, opt, optR);
//}
//
//void solve() {
//    int n, k;
//    ms2(dp);
//    dp[0][0] = 0;
//    scanf("%d%d", &n, &k);
//    forn(i, n) forn(j, n) sum[i + 1][j + 1] = getint();
//    for(int i = 1; i <= n; ++i) for(int j = 1; j <= n; ++j)
//            sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + sum[i][j];
//    for(int d = 1; d <= k; ++d) {
//        calculate(d, d, n, 1, n);
//    }
//    cout << dp[k][n] / 2 << "\n";
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