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
//#define ms2(x) memset(x, 127, sizeof(x))
//#define sz(x) ( (int) x.size() )
//#define len(x) ( (int) x.length() )
//#define ALL(x) x.begin(), x.end()
//#define pii pair<int, int>
//#define pll pair<ll, ll>
//#define pdd pair<double, double>
//
//const int maxn = 3e+5 + 100;
//int tree[4 * maxn];
//vector<int> arr[maxn];
//
//void recalc(int v, int l, int r) {
//    if (l != r)
//        tree[v] = min(tree[2 * v + 1], tree[2 * v + 2]);
//}
//
//void modify(int v, int l, int r, int ind, int x) {
//    if (l == r) {
//        tree[v] = x;
//        return;
//    }
//    int middle = (l + r) >> 1;
//    if (ind > middle)
//        modify(2 * v + 2, middle + 1, r, ind, x);
//    else
//        modify(2 * v + 1, l, middle, ind, x);
//    recalc(v, l, r);
//}
//
//int query(int v, int l, int r, int L, int R) {
//    if (L <= l && r <= R) return tree[v];
//    if (r < L || R < l) return 1e+9;
//    int middle = (l + r) >> 1;
//    int val1 = query(2 * v + 1, l, middle, L, R);
//    int val2 = query(2 * v + 2, middle + 1, r, L, R);
//    return min(val1, val2);
//}
//
//void solve() {
//    ms1(tree);
//    int n;
//    scanf("%d", &n);
//    forn(i, n) {
//        int c;
//        scanf("%d", &c);
//        arr[i].resize(c);
//        forn(j, c) scanf("%d", &arr[i][j]);
//    }
//    vector<int> pos(n, -1);
//    for (int i = n - 1; i >= 0; --i) {
//        forn(j, sz(arr[i])) {
//            int val = arr[i][j];
//            pos[val - 1] = i + 1;
//        }
//    }
//    vector<int> ans(n);
//    forn(i, n) {
//        int border = pos[i];
//        int l = -1, r = n + 1;
//        int curval;
//        if (border == -1) curval = 0;
//        else {
//            while (r - l > 1) {
//                int middle = (l + r) >> 1;
//                int val = query(0, 0, n - 1, 0, middle);
//                if (val < border) r = middle;
//                else l = middle;
//            }
//            curval = r;
//        }
//        modify(0, 0, n - 1, curval, i);
//        ans[i] = curval;
//    }
//    forn(i, sz(ans)) {
//        printf("%d ", ans[i] + 1);
//    }
//    printf("\n");
//}
//
//int main() {
//#ifdef _DEBUG
//    freopen("input.txt", "r", stdin);
//    //freopen("output.txt", "w", stdout);
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