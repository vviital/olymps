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
//struct num {
//    pii minp, maxp;
//
//    num() {
//        minp = maxp = mp(0, 0);
//    }
//
//    num(pii minp, pii maxp) {
//        this->minp = minp;
//        this->maxp = maxp;
//    }
//};
//
//const int maxn = 2e+5 + 100;
//num tree[4 * maxn];
//vector<int> arr;
//
//void recalc(int v, int L, int R) {
//    if (L != R) {
//        tree[v].minp = min(tree[2 * v + 1].minp, tree[2 * v + 2].minp);
//        tree[v].maxp = max(tree[2 * v + 1].maxp, tree[2 * v + 2].maxp);
//    }
//}
//
//void build(int v, int L, int R) {
//    if (L == R) {
//        return void(tree[v] = num(mp(arr[L], L), mp(arr[L], L)));
//    }
//    int middle = (L + R) >> 1;
//    build(2 * v + 1, L, middle);
//    build(2 * v + 2, middle + 1, R);
//    recalc(v, L, R);
//}
//
//num query(int v, int L, int R, int l, int r) {
//    if (l <= L && R <= r) return tree[v];
//    if (r < L || R < l) return num(mp(1e+9, -1), mp(-1e+9, -1));
//    int middle = (L + R) >> 1;
//    num q1 = query(2 * v + 1, L, middle, l, r);
//    num q2 = query(2 * v + 2, middle + 1, R, l, r);
//    return num(min(q1.minp, q2.minp), max(q1.maxp, q2.maxp));
//}
//
//void solve() {
//    int n, m;
//    scanf("%d%d", &n, &m);
//    arr.resize(n);
//    forn(i, n) scanf("%d", &arr[i]);
//    build(0, 0, n - 1);
//    forn(i, m) {
//        int l, r, x;
//        scanf("%d%d%d", &l, &r, &x);
//        l--, r--;
//        num q = query(0, 0, n - 1, l, r);
//        if (q.minp.X != x) {
//            printf("%d\n", q.minp.Y + 1);
//        } else {
//            if (q.maxp.X != x) {
//                printf("%d\n", q.maxp.Y + 1);
//            } else {
//                printf("-1\n");
//            }
//        }
//    }
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