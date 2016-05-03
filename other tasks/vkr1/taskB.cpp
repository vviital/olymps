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
#define sz(x) ( (int) x.size() )
#define len(x) ( (int) x.length() )
#define ALL(x) x.begin(), x.end()
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pdd pair<double, double>

void doh() {
    printf("-1\n");
    exit(0);
}

const int maxn = 2e+5;
vector<int> g[maxn];
int H[maxn];
int cnt;

vector<pii> ans;

int dfs(int v) {
    cnt++;
    int h = 0;
    for(int to : g[v]) {
        ans.push_back(mp(v, to));
        int curh = dfs(to) + 1;
        h = max(h, curh);
    }
    return H[v] = h;
}
void solve() {
    int n, d, h;
    cin >> n >> d >> h;
    if (n - 1 == d && d == h) {
        forn(i, n - 1) cout << i + 1 << " " << i + 2 << "\n";
        return;
    }
    if (d == 1) doh();
    if (d == h) {
        int need = n - d - 1;
        vector<pii> ans;
        forn(i, d) ans.push_back(mp(i + 1, i + 2));
        int last = d + 2;
        forn(i, need) ans.push_back(mp(2, last++));
        if (sz(ans) != n - 1) doh();
        for(auto r : ans) {
            cout << r.X << " " << r.Y << "\n";
        }
        return;
    }
    int N = n;
    int l = h, r = d - h;
    int TT = 1;
    forn(i, l) g[TT].push_back(TT + 1), TT++;
    if (r) g[1].push_back(++TT), r--;
    forn(i, r) g[TT].push_back(TT + 1), ++TT;
    N = n - d - 1;
    forn(i, N) g[1].push_back(++TT);
    int _h = dfs(1);
    if (cnt != n) doh();
    if (h != _h) doh();
    vector<int> hs;
    for(int to : g[1]) hs.push_back(H[to] + 1);
    sort(ALL(hs));
    int m1 = hs.back(); hs.pop_back();
    int m2 = hs.back();
    if (m1 + m2 != d) doh();
    for(auto r : ans) {
        cout << r.X << " " << r.Y << "\n";
    }
}

int main() {
#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#else
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
    solve();
#ifdef _DEBUG
    cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
#endif
    return 0;
}