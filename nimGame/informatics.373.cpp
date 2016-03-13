////http://informatics.mccme.ru/mod/statements/view3.php?id=298&chapterid=372#1
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
//vector<pii> arr[maxn];
//int grandi[maxn];
//
//inline int dfs(int v, int p) {
//    int value = 0;
//    forn(ii, sz(arr[v])) {
//        int to = arr[v][ii].X;
//        if (to == p) continue;
//        value ^= dfs(to, v) + 1;
//    }
//    grandi[v] = value;
//    return value;
//}
//
//void rec(int v, int p, int val) {
//    int grand = grandi[v];
//    for(pii to : arr[v]) {
//        if (to.X == p) continue;
//        int curg = grand ^ (grandi[to.X] + 1) ^ val;
//        int dx = grandi[to.X] + 1 - curg;
//        if (dx < 0) continue;
//        if (!curg) {
//            cout << to.Y << "\n";
//            exit(0);
//        }
//        rec(to.X, v, grandi[to.X] - dx);
//    }
//}
//
//void solve() {
//    int n, r;
//    scanf("%d%d", &n, &r);
//    r--;
//    forn(i, n - 1) {
//        int f, t;
//        scanf("%d%d", &f, &t);
//        f--, t--;
//        arr[f].push_back(mp(t, i + 1));
//        arr[t].push_back(mp(f, i + 1));
//    }
//    int ans = dfs(r, r);
//    if (ans) {
//        cout << "1 ";
//        int bit = 30;
//        while(!(ans & (1 << bit)) && bit >= 0) bit--;
//        for(pii x : arr[r]) {
//            if ((grandi[x.X] + 1) & (1 << bit)) {
//                int val = (ans ^ (1 + grandi[x.X])) - 1;
//                rec(x.X, r, val);
//                cout << x.Y << "\n";
//                break;
//            }
//        }
//    }
//    else {
//        cout << 2 << "\n";
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