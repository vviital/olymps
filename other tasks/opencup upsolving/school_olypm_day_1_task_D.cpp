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
#define INF 1e+9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define X first
#define Y second
#define ms(x) memset(x, 0, sizeof(x))
#define ms1(x) memset(x, -1, sizeof(x))
#define ms2(x) memset(x, 127, sizeof(x))
#define sz(x) ( (int) x.size() )
#define len(x) ( (int) x.length() )
#define ALL(x) x.begin(), x.end()
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pdd pair<double, double>

const int maxn = 2010;
vector<short> pos[maxn][maxn];
int n, k;
int add[5 * maxn];
int sum[5 * maxn];

int query(int color) {
    forn(i, n) if (sz(pos[color][i]) == 0) return 1e+9;
    int ans = 1e+9;
    int to = k << 1;
    forn(i, to) add[i] = sum[i] = 0;
    forn(i, n) {
        int tlen = sz(pos[color][i]);
        if (!tlen) continue;
        forn(j, tlen) {
            pos[color][i].push_back(pos[color][i][j] + k);
        }
        pos[color][i].push_back(pos[color][i][0] + to);
    }
    forn(i, n) {
        int tlen = sz(pos[color][i]);
        forn(j, tlen - 1) {
            int len = pos[color][i][j + 1] - pos[color][i][j];
            int x = pos[color][i][j] + 1;
            int y = pos[color][i][j] + len / 2 + 1;
            int z = pos[color][i][j] + (len + 1) / 2 + 1;
            int r = pos[color][i][j + 1] + 1;
            add[x]++;
            add[y]--;
            add[z]--;
            add[r]++;
        }
    }
    int cursum = 0;
    int curadd = 0;
    forn(i, to) {
        curadd += add[i];
        cursum += curadd;
        sum[i] = cursum;
    }
    for (int i = k; i < to; ++i) {
        ans = min(ans, sum[i]);
    }
    return ans;
}

int readInt() {
    int ans = 0;
    char ch;
    while(true) {
        char ch = getchar();
        if (ch >= '0' && ch <= '9') {
            ans = ans * 10 + ch - '0';
            break;
        }
        else continue;
    }
    while(true) {
        ch = getchar();
        if (ch >= '0' && ch <= '9')
            ans = ans * 10 + ch - '0';
        else break;
    }
    return ans;
}

void solve() {
    scanf("%d%d", &n, &k);
    forn(i, n) forn(j, k) {
            int val = readInt();
            //scanf("%d", &val);
            pos[val][i].push_back(j);
        }
    int ans = 1e+9;
    forn(i, k + 1) {
        int curans = query(i);
        ans = min(curans, ans);
        double T =  clock() * 1. / CLOCKS_PER_SEC;
        if (T > 2.5) break;
    }
    if (ans == 1e+9) ans = -1;
    printf("%d", ans);
    //cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
}

int main() {
#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#else
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
#endif
    solve();
#ifdef _DEBUG
    cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
#endif
    return 0;
}