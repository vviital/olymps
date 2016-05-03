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
//const int maxn = 1e+5 + 100;
//int dp[maxn];
//vector<int> g[maxn];
//int in[maxn];
//bool used[maxn];
//int n, m;
//
//int dfs(int v) {
//    used[v] = true;
//    int length = 0;
//    for(int to : g[v]) {
//        if (!used[to]) {
//            int val = dfs(to) + 1;
//            length = max(length, val);
//        } else {
//            int val = dp[to] + 1;
//            length = max(length, val);
//        }
//    }
//    return dp[v] = length;
//}
//
//bool can(vector<pii> arr, int x) {
//    ms1(dp);
//    ms(used);
//    forn(i, maxn) g[i].clear();
//    ms(in);
//
//    forn(i, x) {
//        int f = arr[i].X;
//        int t = arr[i].Y;
//        g[f].push_back(t);
//        in[t]++;
//    }
//    int index = -1;
//    forn(i, maxn) {
//        if (in[i] == 0 && sz(g[i])) {
//            index = i;
//            break;
//        }
//    }
//    if (index == -1) return false;
//    dfs(index);
//    return dp[index] == n - 1;
//}
//
//void solve() {
//    scanf("%d%d", &n, &m);
//    vector<pii> arr(m);
//    forn(i, m) scanf("%d%d", &arr[i].X, &arr[i].Y);
//    int l = -1, r = m + 1;
//    while(r - l > 1) {
//        int middle = (r + l) >> 1;
//        if (can(arr, middle)) {
//            r = middle;
//        } else {
//            l = middle;
//        }
//    }
//    if (r == m + 1) r = -1;
//    printf("%d\n", r);
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