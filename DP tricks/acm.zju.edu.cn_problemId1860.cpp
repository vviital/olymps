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
//int n;
//
//const int maxn = 1010;
//ll dp[maxn][maxn];
//int mid[maxn][maxn];
//
//void solve() {
//    ms2(dp), ms1(mid);
//    int m;
//    scanf("%d", &m);
//    vector<int> arr(m + 1);
//    forn(i, m) scanf("%d", &arr[i + 1]);
//    arr.push_back(n);
//    // mid[l + 1][r] <= mid[l][r] <= mid[l + 1][r];
//    for(int i = 0; i <= sz(arr); ++i) dp[i][i] = 0, mid[i][i] = i;
//    int maxlen = sz(arr) - 1;
//    for(int len = 2; len <= maxlen; ++len) {
//        for(int i = 0; i < maxlen; ++i) {
//            int j = i + len - 1;
//            if (j + 1 >= sz(arr)) break;
//            for(int k = mid[i][j - 1]; k <= mid[i + 1][j]; ++k) {
//                ll curcost = dp[i][k] + dp[k + 1][j] + arr[j + 1] - arr[i];
//                if (curcost < dp[i][j]) {
//                    dp[i][j] = curcost;
//                    mid[i][j] = k;
//                }
//            }
//        }
//    }
////    forn(i, sz(arr)) forn(j, sz(arr)) if (dp[i][j] > 1e+9) dp[i][j] = 0;
////    strout(arr, sz(arr));
////    cout << endl;
////    forn(j, sz(arr)) {
////        strout(dp[j], sz(arr));
////    }
//    cout << dp[0][sz(arr) - 2] << "\n";
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
//    while(cin >> n) {
//        solve();
//    }
//#ifdef _DEBUG
//    cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//    return 0;
//}