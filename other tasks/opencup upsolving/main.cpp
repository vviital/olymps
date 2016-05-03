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
//struct point{
//    ll x, y;
//
//    point() {
//
//    }
//
//    point(ll x, ll y) {
//        this->x = x;
//        this->y = y;
//    }
//
//    point operator + (const point &o) const {
//        return point(x + o.x, y + o.y);
//    }
//
//    point operator - (const point &o) const {
//        return point(x - o.x, y - o.y);
//    }
//
//    ll operator * (const point &o) const {
//        return x * o.y - o.x * y;
//    }
//
//    ll operator % (const point &o) const {
//        return x* o.x + y * o.y;
//    }
//
//
//    bool operator < (const point &o) const {
//        return mp(x, y) < mp(o.x, o.y);
//    }
//
//    void read() {
//        int x, y;
//        scanf("%d%d", &x, &y);
//        this->x = x;
//        this->y = y;
//    }
//};
//
//vector<point> minimaze(vector<point> &arr) {
//    stable_sort(ALL(arr));
//    vector<point> hull;
//    forn(i, sz(arr)) {
//        while(sz(hull) >= 2) {
//            point h2 = arr[i];
//            point h1 = hull.back(); hull.pop_back();
//            point h0 = hull.back();
//            ll mul = (h1 - h0) * (h2 - h1);
//            if (mul > 0) {
//                hull.push_back(h1);
//                break;
//            }
//        }
//        hull.push_back(arr[i]);
//    }
//    return hull;
//}
//
//ll query(vector<point> &hull, point x) {
//    int l = 0, r = sz(hull) - 1;
//    while(r - l > 3) {
//        int m1 = l + (r - l) / 3;
//        int m2 = r - (r - l) / 3;
//        ll val1 = hull[m1] % x;
//        ll val2 = hull[m2] % x;
//        if (val1 > val2)
//            l = m1;
//        else
//            r = m2;
//    }
//    ll ans = 2e+18 + 100;
//    for(; l <= r; ++l) ans = min(ans, hull[l] % x);
//    return ans;
//}
//
//void solve() {
//    int n, m;
//    scanf("%d", &n);
//    vector<point> seg(n);
//    forn(i, n) seg[i].read();
//    scanf("%d", &m);
//    vector<point> guns(m);
//    forn(i, m) guns[i].read();
//
//    vector<point> hull = minimaze(guns);
//
//    forn(ii, sz(seg)){
//        point x = seg[ii];
//        ll ans = query(hull, x);
//        printf("%lld\n", ans);
//    }
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