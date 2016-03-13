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
//#define ms2(x) memset(x, 1, sizeof(x))
//#define sz(x) ( (int) x.size() )
//#define len(x) ( (int) x.length() )
//#define ALL(x) x.begin(), x.end()
//#define pii pair<int, int>
//#define pll pair<ll, ll>
//#define pdd pair<double, double>
//#define strout(arr, n) forn(i, n) cout << arr[i] << "\t"; cout << "\n";
//
//const int maxn = 20010;
//int n, m, p;
//int _x[2 * maxn], _y[2 * maxn];
//int layer[2][maxn];
//pii points[2][maxn];
//
//int getcost(pii point) {
//    int x = point.X, y = point.Y;
//    int ans = _x[x] + _y[y];
//    while(ans >= p) ans -= p;
//    return ans;
//}
//
//bool check(pii point, int x1, int y1, int x2, int y2) {
//    return (x1 <= point.X && point.X <= x2 && y1 <= point.Y && point.Y <= y2) || (x1 >= point.X && point.X >= x2 && y1 >= point.Y && point.Y >= y2);
//}
//
//int L = 0;
//
//pair<vector<int>, vector<pii> > solve(int fx, int fy, int tx, int ty, int dist) {
//    int signum = dist > 0 ? 1 : -1;
//    dist = dist > 0 ? dist : -dist;
//
//    layer[0][0] = getcost(mp(fx, fy));
//    layer[1][0] = 0;
//    points[0][0] = mp(fx, fy);
//
//    int lastsize = 1;
//    int fr = 0, to = 1;
//    L = 0;
//
//    forn(j, dist) {
//        forn(i, lastsize) points[to][i] = mp(points[fr][i + L].X, points[fr][i + L].Y + signum);
//        points[to][lastsize] = mp(points[fr][lastsize - 1 + L].X + signum, points[fr][lastsize - 1 + L].Y);
//
//        forn(i, lastsize) {
//            layer[to][i] = max(layer[to][i], layer[fr][i + L] + getcost(points[to][i]));
//            layer[to][i + 1] = layer[fr][i + L] + getcost(points[to][i + 1]);
//        }
//        lastsize++;
//        L = 0;
//        if (!check(points[to][0], fx, fy, tx, ty)) {
//            lastsize--;
//            L = 1;
//        }
//
//        if (!check(points[to][lastsize - 1], fx, fy, tx, ty)) {
//            lastsize--;
//        }
//
//        swap(fr, to);
//    }
//
//    vector<int> Layer(lastsize);
//    vector<pii> Points(lastsize);
//    forn(i, lastsize) Layer[i] = layer[fr][i + L], Points[i] = points[fr][i + L];
//
//    return mp(Layer, Points);
//}
//
//set<pii> answer;
//int answerValue;
//
//void stupid(int x1, int y1, int x2, int y2) {
//    vector<vector<int> > dp(x2 - x1 + 1, vector<int>(y2 - y1 + 1));
//    dp[0][0] = getcost(mp(x1, y1));
//    forn(i, sz(dp)) {
//        forn(j, sz(dp[i])) {
//            if (i) dp[i][j] = dp[i - 1][j] + getcost(mp(x1 + i, y1 + j));
//            if (j) dp[i][j] = max(dp[i][j], dp[i][j - 1] + getcost(mp(x1 + i, y1 + j)));
//        }
//    }
//    answerValue = dp.back().back();
//
//    pii curpos = mp(x2 - x1, y2 - y1);
//    answer.insert(mp(x1, y1));
//    forn(i, x2 + y2 - x1 - y1) {
//        int cnt = getcost(mp(curpos.X + x1, curpos.Y + y1));
//        dp[curpos.X][curpos.Y] -= cnt;
//        answer.insert(mp(curpos.X + x1, curpos.Y + y1));
//        if (curpos.Y && dp[curpos.X][curpos.Y - 1] == dp[curpos.X][curpos.Y]) {
//            curpos.Y--;
//        } else {
//            curpos.X--;
//        }
//    }
//}
//
//void solve(int x1, int y1, int x2, int y2) {
//
//    int needX = x2 - x1, needY = y2 - y1;
//    int middle1 = (needX + needY) >> 1;
//    int middle2 = needX + needY - middle1;
//
//
//    if (x1 == x2 && y1 == y2) {
//        answer.insert(mp(x1, x2));
//        return;
//    }
//    if ((x1 == x2 && y1 + 1 == y2) || (x1 + 1 == x2 && y1 == y2)) {
//        answer.insert(mp(x1, y1));
//        answer.insert(mp(x2, y2));
//        answerValue = getcost(mp(x1, y1)) + getcost(mp(x2, y2));
//        return;
//    }
//
//    pair<vector<int>, vector<pii> > l = solve(x1, y1, min(x2, x1 + middle1), min(y2, y1 + middle1), middle1);
//    pair<vector<int>, vector<pii> > r = solve(x2, y2, max(x1, x2 - middle2), max(y1, y2 -  middle2), -middle2);
//
//    vector<int> res(sz(l.X));
//
//    int index = 0;
//    int tlen = sz(r.X);
//
//    forn(i, sz(l.X)) {
//        res[i] = l.X[i] + r.X[tlen - i - 1] - getcost(l.Y[i]);
//        if (res[i] > res[index])
//            index = i;
//    }
//
//    answer.insert(l.Y[index]);
//
//    solve(x1, y1, l.Y[index].X, l.Y[index].Y);
//    solve(l.Y[index].X, l.Y[index].Y, x2, y2);
//
//    answerValue = res[index];
//
//}
//
//void solve() {
//    scanf("%d%d%d", &n, &m, &p);
//    ms1(_x), ms1(_y);
//    forn(i, n) scanf("%d", &_x[i]), _x[i] %= p;
//    forn(i, m) scanf("%d", &_y[i]), _y[i] %= p;
//    solve(0, 0, n - 1, m - 1);
//    printf("%d\n", answerValue);
//    vector<pii> answer(::answer.begin(), ::answer.end());
//    forn(i, sz(answer) - 1) {
//        if (answer[i + 1].X > answer[i].X) putchar('C');
//        else putchar('S');
//    }
//    printf("\n");
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