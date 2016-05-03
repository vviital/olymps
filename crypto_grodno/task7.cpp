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
//void doh(string s) {
//    cout << s << endl;
//    exit(0);
//}
//
//void show(vector<vector<char> > arr) {
//    forn(i, sz(arr)) {
//        forn(j, sz(arr[i]))
//            cout << arr[i][j];
//        cout << endl;
//    }
//}
//void solve() {
//    int k;
//    cin >> k;
//    string s;
//    cin >> s;
//    if (k == 1) doh(s);
//    vector<pii> path;
//    pii cur = mp(0, 0);
//    int dir = 0;
//    forn(i, len(s)) {
//        path.push_back(cur);
//        if (dir == 0) {
//            if (cur.X == k - 1) {
//                cur.X--;
//                dir = 1;
//            } else {
//                cur.X++;
//            }
//        } else {
//            if (cur.X == 0) {
//                cur.X++;
//                dir = 0;
//            } else {
//                cur.X--;
//            }
//        }
//        cur.Y++;
//    }
//    vector<vector<char> > mm(k, vector<char>(len(s)));
//    forn(i, sz(path)) {
//        int x = path[i].X;
//        int y = path[i].Y;
//        mm[x][y] = true;
//    }
//    int ptr = 0;
//    forn(i, sz(mm)) forn(j, sz(mm[i])) {
//            if (mm[i][j]) {
//                mm[i][j] = s[ptr++];
//            }
//        }
//    string ans = "";
//    forn(i, sz(path)) {
//        int x = path[i].X;
//        int y = path[i].Y;
//        ans.push_back(mm[x][y]);
//    }
//    //show(mm);
//    cout << ans << "\n";
//}
//
//int main() {
//#ifdef _DEBUG
//    //freopen("input.txt", "r", stdin);
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