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
//const int maxn = 210;
//int x[] = {1, 0, -1, 0};
//int y[] = {0, -1, 0, 1};
//int mm[300];
//
//struct num {
//    int L, index, dir;
//
//    num() { L = index = dir = -1; }
//
//    num(int L, int index, int dir) {
//        this->L = L;
//        this->index = index;
//        this->dir = dir;
//    }
//};
//
//void init() {
//    mm['N'] = 3;
//    mm['S'] = 1;
//    mm['E'] = 0;
//    mm['W'] = 2;
//}
//
//vector<num> g[maxn];
//bool used[maxn];
//pii cord[maxn];
//
//bool dfs(int v) {
//    bool ok = true;
//    used[v] = true;
//    for(auto to : g[v]) {
//        int tox = cord[v].X + to.L * x[to.dir];
//        int toy = cord[v].Y + to.L * y[to.dir];
//        if (used[to.index]) {
//            if (mp(tox, toy) == cord[to.index]) continue;
//            ok = false;
//        } else {
//            cord[to.index] = mp(tox, toy);
//            bool curok = dfs(to.index);
//            ok = ok && curok;
//        }
//    }
//    return ok;
//}
//
//bool check() {
//    ms(cord), ms(used);
//    forn(i, maxn) {
//        if (used[i]) continue;
//        bool ok = dfs(i);
//        if (!ok) return false;
//    }
//    return true;
//}
//
//void solve() {
//    init();
//    int n;
//    cin >> n;
//    int ans = n;
//    forn(i, n) {
//        int start;
//        cin >> start;
//        vector<num> path;
//        while(true) {
//            int d;
//            cin >> d;
//            if (d == 0) break;
//            char dir;
//            cin >> dir;
//            int index;
//            cin >> index;
//            path.push_back(num(d, index, mm[dir]));
//        }
//        vector<int> indexes;
//        indexes.push_back(start);
//        forn(j, sz(path)) indexes.push_back(path[j].index);
//        forn(j, sz(path)) {
//            int f = indexes[j], t = indexes[j + 1];
//            int d = path[j].L;
//            int dir = path[j].dir;
//            g[f].push_back(num(d, t, dir));
//            g[t].push_back(num(d, f, (dir + 2) % 4));
//        }
//        if (check()) continue;
//        ans = i;
//        break;
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