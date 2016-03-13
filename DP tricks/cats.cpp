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
//struct segment{
//    ll left;
//    ll A, B;
//
//    segment() {
//        left = A = B = 0;
//    }
//
//    segment(ll last, ll A, ll B) {
//        this->left = last;
//        this->A = A;
//        this->B = B;
//    }
//};
//
//void addSegment(vector<segment> &hull, ll A, ll B) {
//    ll x = 0;
//    while(sz(hull)) {
//        segment cur = hull.back();
//        x = (A - cur.A + cur.B - B - 1) / (cur.B - B);
//        if (cur.left >= x) hull.pop_back();
//        else break;
//    }
//    hull.push_back(segment(x, A, B));
//}
//
//const int maxn = 1e+5 + 100;
//ll sums[maxn];
//ll dp[110][maxn];
//
//void solve() {
//    ms2(dp);
//    forn(i, 110) dp[i][0] = 0;
//
//    int n, m, p;
//    scanf("%d%d%d", &n, &m, &p);
//    vector<ll> dist(n + 1);
//    for(int i = 1; i <= n - 1; ++i) {
//        int value;
//        scanf("%d", &value);
//        dist[i + 1] = dist[i] + value;
//    }
//    vector<ll> times(m + 1);
//    for(int i = 1; i <= m; ++i) {
//        int h, t;
//        scanf("%d%d", &h, &t);
//        t -= dist[h];
//        times[i] = t;
//    }
//    sort(times.begin() + 1, times.end());
//    for(int i = sz(times) - 1; i >= 1; --i) times[i] -= times[1];
//    for(int i = 1; i < sz(times); ++i) sums[i] = sums[i - 1] + times[i];
//    for(int i = 1; i <= p; ++i) {
//        vector<segment> hull;
//
//        for(int j = 0; j <= m; ++j) {
//            addSegment(hull, dp[i - 1][j] + sums[j], -j);
//        }
//
//        int ptr = 0;
//        for(int j = 1; j <= m; ++j) {
//            ll add = -sums[j] + j * times[j];
//            while(ptr < sz(hull) && hull[ptr].left <= times[j]) ptr++; ptr--;
//            ll value = hull[ptr].A + hull[ptr].B * times[j];
//            dp[i][j] = add + value;
//        }
//    }
//    cout << dp[p][m] << "\n";
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