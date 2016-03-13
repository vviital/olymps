////http://informatics.mccme.ru/mod/statements/view3.php?id=298&chapterid=369#1
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
//const int maxn = 110;
//int dp[maxn][maxn];
//int n, m, k;
//
//bool check(int a, int b) {
//    if (a == 0) exit(123);
//    if (a == 1 && b <= k) return false;
//    return true;
//}
//
//int getMex(vector<int> arr) {
//    sort(ALL(arr));
//    arr.erase(unique(ALL(arr)), arr.end());
//    forn(i, sz(arr)) if (arr[i] != i) return i;
//    return sz(arr);
//}
//
//int solve(int a, int b) {
//    if (a > b) swap(a, b);
//    if (!check(a, b)) return 0;
//    if (dp[a][b] != -1) return dp[a][b];
//    vector<int> arr;
//
//    forn(iter, 2) {
//        swap(a, b);
//        for (int i = 1; i < a; ++i) {
//            int val1 = solve(i, b);
//            int val2 = solve(a - i, b);
//            arr.push_back(val1 ^ val2);
//        }
//    }
//
//    return dp[a][b] = getMex(arr);
//}
//
//void solve() {
//    ms1(dp);
//    cin >> n >> m >> k;
//    int res = solve(n, m);
//    if (res)
//        cout << "1\n";
//    else
//        cout << "2\n";
//}
//
//void stress() {
//    forn(K, 5) {
//        cout << K + 1 << "\n";
//        ms1(dp);
//        k = K + 1;
//        for(n = 1; n <= 10; ++n)
//            for(m = 1; m <= 10; ++m) {
//                solve(n, m);
//            }
//        for(int i = 1; i <= 10; ++i) {
//            for (int j = 1; j <= 10; ++j) {
//                if (i <= j)
//                    cout << dp[i][j] << "\t";
//            }
//            cout << "\n";
//        }
//        cout << "\n";
//    }
//}
//int main() {
//#ifdef _DEBUG
//    freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//    //freopen("input.txt", "r", stdin);
//    /*freopen("output.txt", "w", stdout);*/
//#endif
////    stress();
////    return 0;
//    solve();
//#ifdef _DEBUG
//    cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//    return 0;
//}