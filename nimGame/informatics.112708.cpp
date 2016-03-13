////http://informatics.mccme.ru/mod/statements/view3.php?id=298&chapterid=112708#1
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
//const int maxn = 55;
//int dp[2][4][4][maxn][maxn];
//int cost[maxn];
//
//int rec(int step, int s1, int s2, int l, int r) {
//    if (s1 >= 3) s1 -= 3;
//    if (s2 >= 3) s2 -= 3;
//
//    if (l - 1 == r) {
//        if (s1 == s2) return 2;
//        if (s1 && s2) return 2;
//        if (s1) return 0;
//        return 1;
//    }
//    if (dp[step][s1][s2][l][r] != -1) return dp[step][s1][s2][l][r];
//    int ans = -1;
//
//    vector<int> state;
//
//    if (step & 1) {
//        state.push_back(rec(step ^ 1, s1 + cost[l], s2, l + 1, r));
//        state.push_back(rec(step ^ 1, s1 + cost[r], s2, l, r - 1));
//    } else {
//        state.push_back(rec(step ^ 1, s1, s2 + cost[l], l + 1, r));
//        state.push_back(rec(step ^ 1, s1, s2 + cost[r], l, r - 1));
//    }
//    sort(ALL(state));
//    if (state[0] == 2) ans = 2;
//    else {
//        if (state[0] == 0) ans = 1;
//        else ans = 0;
//    }
//    return dp[step][s1][s2][l][r] = ans;
//}
//
//string ans[3] = {"SECOND\n", "FIRST\n", "DRAW\n"};
//
//void solve() {
//    ms1(dp);
//    int n;
//    cin >> n;
//    forn(i, n) cin >> cost[i];
//    forn(i, n) cost[i] %= 3;
//    rec(1, 0, 0, 0, n - 1);
//    int res = dp[1][0][0][0][n - 1];
//    cout << ans[res] << "\n";
//
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