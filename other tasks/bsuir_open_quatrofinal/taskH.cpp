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
//#define forn(i, n) for(ll i = 0; i < n; ++i)
//#define INF 1e+9
//#define EPS 1e-9
//#define PI 3.1415926535897932384626433832795
//#define mp(a, b) make_pair(a, b)
//#define pb(a) push_back(a)
//#define X first
//#define Y second
//#define ms(x) memset(x, 0, sizeof(x))
//#define ms1(x) memset(x, -1, sizeof(x))
//#define sz(x) ( (ll) x.size() )
//#define len(x) ( (ll) x.length() )
//#define ALL(x) x.begin(), x.end()
//#define pii pair<ll, ll>
//#define pll pair<ll, ll>
//#define pdd pair<double, double>
//
//const ll mod = 1e+9 + 7;
//const ll maxn = 3e+5;
//vector<pii> g[maxn];
//ll subtree[maxn];
//ll supertree[maxn];
//ll sizes[maxn];
//
//ll mul(ll a, ll b) {
//    return a * (ll) b % mod;
//}
//
//ll add(ll a, ll b) {
//    ll res = (a + b) % mod;
//    if (res < 0) res += mod;
//    return res;
//}
//
//ll dfs1(ll v, ll p) {
//    sizes[v] = 1;
//    ll value = 0;
//    for(auto to : g[v]) {
//        if (to.X == p) continue;
//        ll curval = dfs1(to.X, v);
//        sizes[v] += sizes[to.X];
//        curval = mul(curval, 2);
//        curval = add(curval, 1);
//        value = add(value, curval);
//    }
//    return subtree[v] = value;
//}
//
//void dfs2(ll v, ll p) {
//    ll value = 0;
//    for(auto to : g[v]) {
//        if (to.X == p) continue;
//        ll curval = add(subtree[v], -add(mul(subtree[to.X], 2), 1));
//        curval = add(curval, supertree[v]);
//        supertree[to.X] = add(1, mul(2, curval));
//        dfs2(to.X, v);
//    }
//}
//int n;
//
//ll dfs3(ll v, ll p) {
//    ll value = 0;
//    for(auto to : g[v]) {
//        if (to.X == p) continue;
//        ll val1 = add(1, mul(2, subtree[to.X])) * (n - sizes[to.X]);
//        ll val2 = supertree[to.X] * (sizes[to.X]);
//        ll curval = add(val1, val2);
//        curval = mul(to.Y, curval);
//        value = add(value, curval);
//        ll subtr = dfs3(to.X, v);
//        value = add(value, subtr);
//    }
//    return value;
//}
//
//ll dfs4(ll v, ll p, ll t, ll p2) {
//    if (v == t) return 0;
//    ll ans = -1;
//    for(auto to : g[v]) {
//        if (to.X == p) continue;
//        ll curans = dfs4(to.X, v, t, p2 * 2);
//        if (curans < 0) continue;
//        ans = curans + p2 * to.Y;
//        return ans;
//    }
//    return -1;
//}
//
//void stupid() {
//    int n;
//    scanf("%d", &n);
//    forn(i, n - 1) {
//        int f, t, c;
//        scanf("%d%d%d", &f, &t, &c);
//        f--, t--;
//        g[f].push_back(mp(t, c));
//        g[t].push_back(mp(f, c));
//    }
//    ll ans = 0;
//    ll cnt = 0;
//    forn(i, n) forn(j, n) {
//            if (i == j) continue;
//            ll curans = dfs4(i, i, j, 1);
//           // cerr << i << " " << j << " " << curans << "\n";
//            ans += curans;
//            cnt++;
//        }
//    cout << ans << "\n";
//    //cout << cnt << "\n";
//}
//
//
//void solve() {
//    scanf("%d", &n);
//    forn(i, n - 1) {
//        int f, t, c;
//        scanf("%d%d%d", &f, &t, &c);
//        f--, t--;
//        g[f].push_back(mp(t, c));
//        g[t].push_back(mp(f, c));
//    }
//    dfs1(0, 0);
//    dfs2(0, 0);
////    forn(iter, n) cout << subtree[iter] << " ";
////    cout << "\n";
////    forn(iter, n) cout << supertree[iter] << " ";
////    cout << "\n";
//    ll ans = dfs3(0, 0);
//    cout << ans << "\n";
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
////    stupid();
////    return 0;
//    solve();
//#ifdef _DEBUG
//    cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//    return 0;
//}