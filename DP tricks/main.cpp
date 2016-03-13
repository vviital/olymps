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
//ll dp[maxn];
//
//struct segment {
//    ll left;
//    ll C, B;
//
//    segment() { }
//
//    segment(ll left, ll C, ll B) {
//        this->left = left;
//        this->C = C;
//        this->B = B;
//    }
//};
//
//void addSegment(vector<segment> &hull, ll C, ll B) {
//    ll x = 0;
//    while(sz(hull)) {
//        segment cur = hull.back();
//        x = (C - cur.C + cur.B - B + 1) / (cur.B - B);
//        if (cur.left >= x) hull.pop_back();
//        else break;
//    }
//    hull.push_back(segment(x, C, B));
//}
//
//void solve() {
//    int n;
//    scanf("%d", &n);
//    vector<int> a(n), b(n);
//    forn(i, n) scanf("%d", &a[i]);
//    forn(i, n) scanf("%d", &b[i]);
//    vector<segment> hull;
//    hull.push_back(segment(0,0,b[0]));
//    int ptr = 0;
//    for(int i = 1; i < sz(a); ++i) {
//        while(ptr < sz(hull) && hull[ptr].left <= a[i]) ptr++; ptr--;
//        dp[i] = hull[ptr].C + hull[ptr].B * a[i];
//        addSegment(hull, dp[i], b[i]);
//    }
//    cout << dp[n - 1] << "\n";
//    //printf("%lld", dp[n - 1]);
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