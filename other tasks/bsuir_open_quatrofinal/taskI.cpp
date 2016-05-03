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
//const int maxn = 2e+5;
//int t[maxn];
//
//int sum (int r) {
//    int result = 0;
//    for (; r >= 0; r = (r & (r+1)) - 1)
//        result += t[r];
//    return result;
//}
//
//void inc (int i, int delta) {
//    for (; i < maxn; i = (i | (i+1)))
//        t[i] += delta;
//}
//
//ll solve(vector<int> arr, int m) {
//    ms(t);
//    vector<pii> pref(sz(arr));
//    forn(i, sz(arr)) {
//        if (i)
//            pref[i] = mp(pref[i - 1].X + arr[i], i);
//        else
//            pref[i] = mp(arr[i], i);
//    }
//    sort(ALL(pref));
//    vector<int> indexes(sz(arr));
//    forn(i, sz(pref)) indexes[pref[i].Y] = i;
//    int s = 0;
//    ll ans = 0;
////    forn(i, sz(arr)) cerr << arr[i] << " ";
////    cerr << "\n";
//    forn(i, sz(arr)) {
//        s += arr[i];
//        int need = s - m;
//        int index = lower_bound(ALL(pref), mp(need, -1)) - pref.begin() - 1;
//        if ((index == 0 && pref[index].X >= need)) index--;
//        int curans = sum(index);
//        ans += curans;
//        //cerr << curans << "\n";
//        inc(indexes[i], 1);
//    }
//    return ans;
//}
//
//void solve() {
//    int n, m;
//    scanf("%d%d", &n, &m);
//    vector<int> arr(n);
//    forn(i, n) scanf("%d", &arr[i]);
//    arr.insert(arr.begin(), 0);
//    ll ans = 0;
//    forn(iter, 2) {
//        ll curans = solve(arr, m);
//        ans += curans;
//        //cerr << curans << "\n";
//        forn(i, sz(arr)) arr[i] *= -1;
//    }
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
//    solve();
//#ifdef _DEBUG
//    cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//    return 0;
//}