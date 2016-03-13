////http://informatics.mccme.ru/mod/statements/view3.php?id=298&chapterid=368#1
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
//const int maxn = 20000;
//int dp[2][maxn];
//int bound = 19683;
//
//int getint(char ch) {
//    if (ch == '0') return 0;
//    if (ch == 'A') return 1;
//    return 2;
//}
//
//int toint(vector<int> &arr) {
//    int res = 0;
//    forn(i, sz(arr)) {
//        res = res * 3 + arr[i];
//    }
//    return res;
//}
//
//vector<int> tovect(int a, int nm) {
//    vector<int> res;
//    while(a) {
//        res.push_back(a % 3);
//        a /= 3;
//        nm--;
//    }
//    while(nm > 0 && nm--) res.push_back(0);
//    reverse(ALL(res));
//    return res;
//}
//
//pii transf[10][maxn];
//
//bool isStable(vector<int> &mask) {
//    forn(i, sz(mask))
//        if (mask[i] == 3) return false;
//    return true;
//}
//
//int _x[] = {-1, 1, 0, 0};
//int _y[] = {0, 0, 1, -1};
//
//void show(vector<int> &mask, int n, int m) {
//    return;
//    int cnt = 0;
//    forn(i, n) {
//        forn(j, m) {
//            cerr << mask[cnt++];
//        }
//        cerr << "\n";
//    }
//    cerr << "\n\n";
//}
//
//pii model(vector<int> mask, int i, int n, int m) {
//    int blast = 0;
//    while(!isStable(mask)) {
//        show(mask, n, m);
//        vector<int> tomask(sz(mask));
//        forn(i, sz(mask)) {
//            if (mask[i] < 3) {
//                tomask[i] = min(3, tomask[i] + mask[i]);
//                continue;
//            }
//            blast++;
//            forn(iter, 4) {
//                int x = i / m, y = i % m;
//                x = x + _x[iter];
//                y = y + _y[iter];
//                if (x < 0 || x >= n) continue;
//                if (y < 0 || y >= m) continue;
//                int toInd = x * n + y;
//                if (mask[toInd] < 3 && mask[toInd])
//                    tomask[toInd] = min(3, tomask[toInd] + 1);
//            }
//        }
//        mask = tomask;
//    }
//    show(mask, n, m);
//    return mp(toint(mask), blast - 1);
//}
//
//void precalc(int n, int m) {
//    int nm = n * m;
//    forn(i, nm) {
//        //cerr << i << "\n";
//        forn(mask, bound) {
//            //cerr << mask << "\n";
//            vector<int> curmask = tovect(mask, nm);
//            if (sz(curmask) > n * m) break;
//            if (curmask[i] == 0) {
//                curmask[i] = 1;
//                int tomask = toint(curmask);
//                transf[i][mask] = mp(tomask, -1);
//            } else if (curmask[i] == 1) {
//                curmask[i] = 2;
//                int tomask = toint(curmask);
//                transf[i][mask] = mp(tomask, -1);
//            } else {
//                curmask[i] = 3;
//                pii val = model(curmask, i, n, m);
//                transf[i][mask] = val;
//            }
//        }
//    }
//}
//
//void clear(int index) {
//    forn(i, maxn) dp[index][i] = -1e+9;
//}
//
//void solve() {
//    int n, m;
//    cin >> n >> m;
//
//    precalc(n, m);
//
//    vector<int> vals;
//    forn(i, n) {
//        string s;
//        cin >> s;
//        forn(j, len(s))
//            vals.push_back(getint(s[j]));
//    }
//    int magic = 50;
//    int index = toint(vals);
//    vals = tovect(index, n * m);
//
//    clear(0);
//    dp[0][index] = 0;
//
//    int cur = 0;
//    int bans = -1e+9;
//
//    forn(iter, magic) {
//        bans = max(bans, dp[cur][0]);
//
//        int to = cur ^ 1;
//        clear(to);
//        forn(mask, bound) {
//            if (dp[cur][mask] == -1e+9) continue;
//            dp[to][mask] = max(dp[to][mask], dp[cur][mask]);
//            int nm = n * m;
//            forn(cell, nm) {
//                int tomask = transf[cell][mask].X;
//                int cost = transf[cell][mask].Y;
//                if (dp[cur][mask] + cost == 3) {
//                    int num = 0;
//                }
//                dp[to][tomask] = max(dp[to][tomask], dp[cur][mask] + cost);
//            }
//        }
//        cur = to;
//    }
//
//    cout << bans << "\n";
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
