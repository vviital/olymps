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
//#define ms2(x) memset(x, 32, sizeof(x))
//#define sz(x) ( (int) x.size() )
//#define len(x) ( (int) x.length() )
//#define ALL(x) x.begin(), x.end()
//#define pii pair<int, int>
//#define pll pair<ll, ll>
//#define pdd pair<double, double>
//
//const int maxn = 310;
//int arr[maxn][maxn];
//ll color[maxn];
//ll d[maxn];
//int n;
//vector<int> g[maxn];
//
//void dij(int v) {
//    forn(i, maxn) d[i] = 1e+18;
//    vector<int> used(n, false);
//    d[v] = 0;
//
//    while(v != -1) {
//        used[v] = true;
//        forn(j, n) {
//            d[j] = min(d[j], d[v] + arr[v][j]);
//        }
//
//        v = -1;
//        forn(j, n) {
//            if (!used[j] && d[j] != 1e+18 && (v == -1 || d[v] > d[j])) {
//                v = j;
//            }
//        }
//    }
//}
//
//vector<pair<pii, int> > mem;
//
//void dfs(int v, bool fl, int color) {
//    ::color[v] = color;
//    forn(i, sz(g[v])) {
//        int to = g[v][i];
//        if (fl) ++color;
//        if (!::color[to]) {
//            dfs(to, false, color);
//            mem.push_back(mp(mp(v, to), arr[v][to]));
//            arr[v][to] = arr[to][v] = 1e+9 + 10;
//        }
//    }
//}
//
//void show() {
//    return;
//    forn(i, n) {
//        forn(j, n)
//            cout << arr[i][j] << "\t\t";
//        cout << "\n";
//    }
//}
//
//int query(int v) {
//    ms(color);
//    dij(v);
//    forn(i, n) g[i].clear();
//    forn(i, n) forn(j, n) {
//            if (arr[i][j] <= 1e+9 && d[j] == d[i] + arr[i][j]) {
//                g[i].push_back(j);
//            }
//        }
//    vector<int> cant(n, true);
//    for(int x : g[v]) cant[x] = false;
//    dfs(v, true, 1);
//    show();
//    ll ans = 1e+18;
//    forn(i, n) forn(j, n) {
//            if (color[i] && color[j] && color[i] != color[j]) {
//                ans = min(ans, d[i] + d[j] + arr[i][j]);
//            }
//        }
//    while(sz(mem)) {
//        arr[mem.back().X.X][mem.back().X.Y] = arr[mem.back().X.Y][mem.back().X.X] =  mem.back().Y;
//        mem.pop_back();
//    }
//    if (ans > 1e+9) ans = -1;
//    return ans;
//}
//
//void solve() {
//    scanf("%d", &n);
//    forn(i, n) forn(j, n) {
//            scanf("%d", &arr[i][j]);
//            if (arr[i][j] <= 0) arr[i][j] = 1e+9 + 10;
//        }
//    forn(i, n) {
//        int ans = query(i);
//        printf("%d\n", ans);
//    }
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