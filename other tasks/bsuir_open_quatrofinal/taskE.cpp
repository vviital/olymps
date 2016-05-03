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
//void solve() {
//   int n;
//   cin >> n;
//   map<ll, ll> cnt;
//   forn(i, n) {
//      int val;
//      cin >> val;
//      for(ll i = 2; i * i <= val; ++i) {
//         if (val % i == 0) {
//            int t = 0;
//            while(val % i == 0) t++, val /= i;
//            cnt[i] += t;
//         }
//      }
//      if (val != 1) cnt[val]++;
//   }
//   ll ans = 1;
//   for(auto x : cnt) ans *= x.Y + 1;
//   cout << ans << "\n";
//}
//
//int main() {
//#ifdef _DEBUG
//   freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//   //freopen("input.txt", "r", stdin);
//   //freopen("output.txt", "w", stdout);
//#endif
//   solve();
//#ifdef _DEBUG
//   cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//   return 0;
//}