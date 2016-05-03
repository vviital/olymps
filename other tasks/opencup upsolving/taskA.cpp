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
//const int magic = 30 * 30 + 10;
//bitset<magic> dp[405][magic];
//
//pii balance(int a, int b, int c) {
//    if (a > b) swap(a, b);
//    if (a > c) swap(a, c);
//    if (b > c) swap(b, c);
//    return mp(b - a, c - b);
//}
//
//void update(int ii, int a, int b) {
//    if (a < magic && b < magic)
//        dp[ii][a][b] = true;
//}
//
//bool check(pii to) {
//    return to.X < magic && to.Y < magic;
//}
//
//void solve() {
//    int n;
//    scanf("%d", &n);
//    vector<pii> ts(n);
//    forn(i, n) scanf("%d", &ts[i].X), ts[i].Y = i + 1;
//    dp[0][0][0] = 1;
//    forn(ii, n) {
//        int time = ts[ii].X;
//        forn(i, magic) forn(j, magic) {
//                if (!dp[ii][i][j]) continue;
//                int a = 0, b = i, c = i + j;
//                pii to1 = balance(a + time, b, c);
//                pii to2 = balance(a, b + time, c);
//                pii to3 = balance(a, b, c + time);
//
//                update(ii + 1, to1.X, to1.Y);
//                update(ii + 1, to2.X, to2.Y);
//                update(ii + 1, to3.X, to3.Y);
//            }
//    }
//
//    int ans = 1e+9;
//    pii indexs;
//    forn(i, magic) forn(j, magic) {
//            if (!dp[n][i][j]) continue;
//            if (i + j < ans) {
//                indexs = mp(i, j);
//                ans = j + i;
//            }
//        }
//    if (ans == 1e+9) {
//        exit(123);
//    }
//    vector<pair<int, vector<int> > > arr(3);
//    vector<pii> path;
//    path.push_back(indexs);
//
//    for(int i = n; i >= 1; i--) {
//        int time = ts[i - 1].X;
//        indexs = path.back();
//
//        int a = 0, b = indexs.X, c = indexs.X + indexs.Y;
//        pii from1 = balance(a - time, b, c);
//        pii from2 = balance(a, b - time, c);
//        pii from3 = balance(a, b, c - time);
//
//        if (check(from1) && dp[i - 1][from1.X][from1.Y]) {
//            path.push_back(from1);
//        } else if (check(from2) && dp[i - 1][from2.X][from2.Y]) {
//            path.push_back(from2);
//        } else {
//            if (check(from3) && dp[i - 1][from3.X][from3.Y])
//                path.push_back(from3);
//        }
//    }
//    reverse(ALL(path));
//
//    for(int i = 1; i < sz(path); ++i) {
//        int time = ts[i - 1].X;
//        int a = 0, b = path[i - 1].X, c = path[i - 1].X + path[i - 1].Y;
//        pii to1 = balance(a + time, b, c);
//        pii to2 = balance(a, b + time, c);
//        pii to3 = balance(a, b, c + time);
//
//        if (to1 == path[i]) {
//            arr[0].X += time;
//            arr[0].Y.push_back(ts[i - 1].Y);
//        } else if (to2 == path[i]) {
//            arr[1].X += time;
//            arr[1].Y.push_back(ts[i - 1].Y);
//        } else {
//            arr[2].X += time;
//            arr[2].Y.push_back(ts[i - 1].Y);
//        }
//
//        sort(ALL(arr));
//    }
//    cout << "\n";
//    cout << ans << "\n";
//    forn(i, 3) {
//        cout << sz(arr[i].Y) << " ";
//        forn(j, sz(arr[i].Y)) cout << arr[i].Y[j] << " ";
//        cout << "\n";
//    }
//    cout << "\n";
//}
//
//int main() {
//#ifdef _DEBUG
//    freopen("input.txt", "r", stdin);
//    //freopen("output.txt", "w", stdout);
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