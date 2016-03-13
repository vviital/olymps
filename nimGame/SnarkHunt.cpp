////http://informatics.mccme.ru/mod/statements/view3.php?id=298&chapterid=367#1
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
//bool model(vector<bool> maps, int from, int x, int s) {
//    bool ok = true;
//    int start = from;
//    while(true) {
//        if (x <= s || x < from) return false;
//
//        // Snark move
//        int j = x - s;
//        while(maps[j] && j <= x) ++j;
//        if (x == j) return true;
//        x = j;
//
//        // Baker move
//        while(from < x && maps[from]) from++;
//        if (from == x) {
//            while(start > 0 && maps[start]) start--;
//            if (start != 0) maps[start] = true;
//            continue;
//        };
//        maps[from] = true;
//    }
//
//}
//
//void solve() {
//    int x, s, n;
//    scanf("%d%d%d",&x, &s, &n);
//    vector<bool> maps(x + 1);
//    bool ok = false;
//    forn(i, n) {
//        int v;
//        scanf("%d", &v);
//        maps[v] = 1;
//    }
//    for(int i = 1; i < x; ++i) {
//        bool can = model(maps, i, x, s);
//        if (can) {
//            ok = true;
//            break;
//        }
//    }
//    if (ok) {
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
//    /*freopen("output.txt", "w", stdout);*/
//#endif
//    solve();
//#ifdef _DEBUG
//    cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//    return 0;
//}