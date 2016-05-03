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
//const int mod = 1e+9 + 7;
//
//inline ll add(ll a, ll b) {
//    ll res = (a + b) % mod;
//    if (res < 0) res += mod;
//    return res;
//}
//
//inline ll mul(ll a, ll b) {
//    return a * b % mod;
//}
//
//int count(int a) {
//    int cnt = 0;
//    while(a) cnt += a & 1, a >>= 1;
//    return cnt;
//}
//
//int stupid(vector<pll> seg) {
//    int ans = 0;
//    forn(i, sz(seg)) forn(j, sz(seg)) {
//            if (i == j) continue;
//            for(int x = seg[i].X; x <= seg[i].Y; ++x)
//                for(int y = seg[j].X; y <= seg[j].Y; ++y) {
//                    ans += count(x ^ y);
//                }
//        }
//    return ans / 2;
//
//}
//
//ll countBit(ll a, ll bit) {
//    ll cycle = (a >> (bit + 1)) * (1LL << bit);
//    ll res = 0;
//    if (a & (1LL << bit))
//        res = a % (1LL << bit) + 1;
//    return cycle + res;
//}
//
//ll countBit(ll l, ll r, ll bit) {
//    if (!l) return countBit(r, bit);
//    return countBit(r, bit) - countBit(l - 1, bit);
//}
//
//int solve(vector<pll> seg) {
//    int n = sz(seg);
//    vector<ll> counts(sz(seg));
//    forn(i, sz(seg)) counts[i] = seg[i].Y - seg[i].X + 1;
//    vector<vector<pll> > cnt(n, vector<pll>(62));
//    forn(i, sz(seg)) {
//        forn(j, sz(cnt[i])) {
//            cnt[i][j].X = countBit(seg[i].X, seg[i].Y, j) % mod;
//            cnt[i][j].Y = (counts[i] - cnt[i][j].X) % mod;
//        }
//    }
//    ll ans = 0;
//    forn(bit, sz(cnt[0])) {
//        ll zero = 0, one = 0;
//        ll mem = 0;
//        forn(i, sz(seg)) {
//            zero = add(zero, cnt[i][bit].Y);
//            one = add(one, cnt[i][bit].X);
//            mem = add(mem, cnt[i][bit].X * cnt[i][bit].Y);
//        }
//        ans = add(ans, mul(zero, one));
//        ans = add(ans, -mem);
//    }
//    return ans;
//}
//
//void solve() {
//    int n;
//    scanf("%d", &n);
//    vector<pll> seg(n);
//    forn(i, sz(seg)) cin >> seg[i].X >> seg[i].Y;
//    int ans = solve(seg);
//    cout << ans << "\n";
//}
//
//void stress() {
//    int magic = 100;
//    int n = 100;
//    forn(i, magic) {
//        vector<pll> seg(n);
//        cerr << i << "\n";
//        forn(j, sz(seg)) {
//            seg[j].X = rand() % 100;
//            seg[j].Y = rand() % 100;
//            if (seg[j].X > seg[j].Y) swap(seg[j].X, seg[j].Y);
//        }
//        int ans1 = solve(seg);
//        int ans2 = stupid(seg);
//        if (ans1 != ans2) {
//            cerr << "ERROR\n";
//            cerr << ans1 << " " << ans2 << "\n";
//            exit(0);
//        }
//    }
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
////    stress();
////    return 0;
//    //cout << stupid() << "\n";
//   solve();
//#ifdef _DEBUG
//    cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//    return 0;
//}