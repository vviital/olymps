//http://codeforces.com/gym/100136
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <vector>
#include <stack>
#include <map>
#include <set>
#include <queue>
#include <cstring>
#include <bitset>
#include <cstdio>
#include <cstdlib>
#include <cassert>

using namespace std;

typedef long long ll;
typedef double db;
typedef long double ldb;
typedef string str;

#define forn(i, n) for(int i = 0; i < n; ++i)
#define forn1(i, n) for(int i = 1; i <= n; ++i)
#define INF 1e+9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define X first
#define Y second
#define ms(x) memset(x, 0, sizeof(x))
#define ms1(x) memset(x, -1, sizeof(x))
#define sz(x) ( (int) x.size() )
#define len(x) ( (int) x.length() )
#define ALL(x) x.begin(), x.end()
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pdd pair<double, double>

struct num {
    int step, x1, y1, x2, y2;

    num() {
        x1 = y1 = x2 = y2 = step = 0;
    }

    num(int x1, int y1, int x2, int y2, int step) {
        this->x1 = x1;
        this->y1 = y1;
        this->x2 = x2;
        this->y2 = y2;
        this->step = step;
    }
};

int degree[2][20][20][20][20];
bool win[2][20][20][20][20];
bool lose[2][20][20][20][20];
bool hit[20][20][20][20];
bool used[2][20][20][20][20];
int NuM = 8;
int arr[20][20];
int _x[] = {1, -1, 0, 0, 1, 1, -1, -1};
int _y[] = {0, 0, 1, -1, 1, -1, 1, -1};

void show() {
    return;
    forn(i, 10) {
        forn(j, 10) {
            cout << arr[i][j];
        }
        cout << "\n";
    }
}

int cnt = 0;

void dfs(num pos) {
    if (!used[pos.step][pos.x1][pos.y1][pos.x2][pos.y2])
        cnt++;
    used[pos.step][pos.x1][pos.y1][pos.x2][pos.y2] = true;
    forn(iter, 8) {
        int x = _x[iter];
        int y = _y[iter];
        num npos = pos;
        npos.step ^= 1;
        if (pos.step == 1) {
            npos.x1 += x;
            npos.y1 += y;
        } else {
            npos.x2 += x;
            npos.y2 += y;
        }
        int step = npos.step, x1 = npos.x1, x2 = npos.x2, y1 = npos.y1, y2 = npos.y2;
        if (arr[x1][y1] == 1 || arr[x2][y2] == 1 || used[step][x1][y1][x2][y2]) continue;
        if (lose[step][x1][y1][x2][y2] || win[step][x1][y1][x2][y2]) {
            dfs(npos);
            continue;
        }
        if (lose[pos.step][pos.x1][pos.y1][pos.x2][pos.y2]) {
            win[step][x1][y1][x2][y2] = true;
        } else {
            if (--degree[step][x1][y1][x2][y2] == 0) {
                if (degree[step][x1][y1][x2][y2] < 0) cerr << "fff";
                lose[step][x1][y1][x2][y2] = true;
            } else {
                continue;
            }
        }
        dfs(npos);
    }
}

void solve(int X1, int Y1, int X2, int Y2) {
    forn1(x1, NuM) forn1(y1, NuM) forn1(x2, NuM) forn1(y2, NuM) {
                    if (arr[x1][y1] == 1 || arr[x2][y2] == 1) continue;
                    forn(step, 2) {
                        forn(iter, 8) {
                            int x = _x[iter];
                            int y = _y[iter];
                            if (step) {
                                x = x2 + x;
                                y = y2 + y;
                                if (arr[x][y] != 1) degree[step][x1][y1][x2][y2]++;
                            } else {
                                x = x1 + x;
                                y = y1 + y;
                                if (arr[x][y] != 1) degree[step][x1][y1][x2][y2]++;
                            }
                        }
                    }
                }
    vector<num> starts;

    forn1(x1, NuM) forn1(y1, NuM) forn1(x2, NuM) forn1(y2, NuM) {
                    if (arr[x1][y1] == 1 || arr[x2][y2] == 1) continue;
                    if (hit[x1][y1][x2][y2]) {
                        forn(iter, 2) {
                            lose[iter][x1][y1][x2][y2] = !iter;
                            win[iter][x1][y1][x2][y2] = (bool) iter;
//                            if (lose[iter][x1][y1][x2][y2])
//                                starts.push_back(num(x1, y1, x2, y2, iter));
                        }
                    }
                }
    int x1 = NuM;
    forn1(y1, NuM) forn1(x2, NuM) forn1(y2, NuM) {
                if (arr[x1][y1] == 1 || arr[x2][y2] == 1) continue;
                if (!hit[x1][y1][x2][y2]) {
                    win[0][x1][y1][x2][y2] = true;
                }
            }

//    for(auto x : starts) {
//        cout << x.step << " " << x.x1 << " " << x.y1 << " " << x.x2 << " " << x.y2 << "\n";
//    }
    forn(iter, 2) forn1(x1, NuM) forn1(y1, NuM) forn1(x2, NuM) forn1(y2, NuM) {
                        if (!used[iter][x1][y1][x2][y2] && (lose[iter][x1][y1][x2][y2] || win[iter][x1][y1][x2][y2])) {
                            dfs(num(x1, y1, x2, y2, iter));
                        }
                    }
//    forn(i, sz(starts)) {
//        dfs(starts[i]);
//    }
   // cout << cnt << "\n";
    if (win[0][X1][Y1][X2][Y2]) cout << 1 << "\n";
    else cout << -1 << "\n";
}

void solve() {
    forn(i, 10) forn(j, 10) arr[i][j] = 1;
    string s;
    int X1, Y1, X2, Y2;
    forn(i, NuM) {
        cin >> s;
        forn(j, len(s)) {
            arr[i + 1][j + 1] = s[j] - '0';
            if (s[j] == '2') {
                X1 = i + 1, Y1 = j + 1;
                arr[X1][Y1] = 0;
            }
            if (s[j] == '3') {
                X2 = i + 1, Y2 = j + 1;
                arr[X2][Y2] = 0;
            }
        }
    }
    show();
    forn1(x2, NuM) forn1(y2, NuM) {
            forn(iter, 8) {
                int x1 = x2, y1 = y2;
                while(arr[x1][y1] != 1) {
                    hit[x1][y1][x2][y2] = true;
                    x1 += _x[iter];
                    y1 += _y[iter];
                }
            }
        }
    solve(X1, Y1, X2, Y2);
}

int main() {
#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#else
    freopen("terminator.in", "r", stdin);
    freopen("terminator.out", "w", stdout);
#endif
    solve();
#ifdef _DEBUG
    cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
#endif
    return 0;
}