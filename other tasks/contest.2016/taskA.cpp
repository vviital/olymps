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
//    string a[2], b[2];
//    forn(iter, 2) cin >> a[iter];
//    forn(iter, 2) cin >> b[iter];
//    bool ok = false;
//    forn(iter, 10000) {
//        if (a[0] == b[0] && a[1] == b[1]) ok = true;
//        if (a[0][0] == 'X') swap(a[0][0], a[1][0]);
//        else if (a[1][0] == 'X') swap(a[1][0], a[1][1]);
//        else if (a[1][1] == 'X') swap(a[1][1], a[0][1]);
//        else if (a[0][1] == 'X') swap(a[0][1], a[0][0]);
//        //cout << a[0] << "\n" << a[1] << "\n";
//    }
//    if (ok == true) {
//        cout << "YES\n";
//    } else {
//        cout << "NO\n";
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
//    solve();
//#ifdef _DEBUG
//    cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//    return 0;
//}