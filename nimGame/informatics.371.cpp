////http://informatics.mccme.ru/mod/statements/view3.php?id=298&chapterid=371#1
//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <queue>
//#include <map>
//#include <set>
//#include <cmath>
//#include <sstream>
//#include <stack>
//#include <cassert>
//#include <string.h>
//#include <ctime>
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
//const int maxn = 2e+5 + 100;
//vector<int> g[maxn];
//int cost[maxn];
//bool used[maxn];
//
//int dfs(int v, bool step) {
//    if (v == 0) exit(123);
//    used[v] = true;
//    int curans = 0;
//    if (step == 0) curans = -2e+9;
//    else curans = 2e+9;
//    if (sz(g[v]) == 0) curans = cost[v];
//    forn(i, sz(g[v])) {
//        if (used[g[v][i]]) continue;
//        int val = dfs(g[v][i], step ^ 1);
//        if (step == 0)
//            curans = max(curans, val);
//        else
//            curans = min(curans, val);
//    }
//    if (step == 0) curans = max(curans, cost[v]);
//    return curans;
//}
//
//void solve() {
//    int n;
//    scanf("%d", &n);
//    forn(i, n) {
//        int p, c;
//        scanf("%d%d", &p, &cost[i + 1]);
//        if (i + 1 == p) {
//            exit(123);
//        }
//        if (i == 0 && p != 0) {
//            exit(123);
//        }
//        if (i != 0 && p == 0) {
//            exit(123);
//        }
//        g[p].push_back(i + 1);
//    }
//    int ans = dfs(1, 0);
//    cout << ans << "\n";
//}
//
//int stst;
//const int stz = 10000000;
//int arr[stz];
//int arrit = (int)(&arr)+stz-1;
//
//int main() {
//#ifdef _DEBUG
//    freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//    //freopen("input.txt", "r", stdin);
//    /*freopen("output.txt", "w", stdout);*/
//#endif
//    ms(arr);
//    asm("pushal\n");
//    asm("movl %esp, %eax\n");
//    asm("movl %0, %%esp\n" :: "d"(arrit));
//    asm("push %eax\n");
//    asm("call %0\n" :: "d"(solve));
//    asm("pop %eax\n");
//    asm("movl %eax, %esp\n");
//    asm("popal\n");
//#ifdef _DEBUG
//    cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//    return 0;
//}