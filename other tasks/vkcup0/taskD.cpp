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
    cout << "IMPOSSIBLE\n";
    exit(0);
}

struct num {
    int type;
    int length;

    num() { type = length = 0; }

    num(int type, int length) {
        this->type = type;
        this->length = length;
    }

    void print() {
        if (length == 0) return;
        if (type == 1) {
            printf("RUN %d\n", length);
        }
        if (type == 2) {
            printf("JUMP %d\n", length);
        }
    }
};

void solve() {
    int n, m, s, d;
    scanf("%d%d%d%d", &n, &m, &s, &d);
    vector<int> arr(n);
    forn(i, n) {
        scanf("%d", &arr[i]);
    }
    sort(ALL(arr));
    vector<pii> seg;
    int last = -1;
    forn(i, sz(arr)) {
        if (i) {
            if (arr[i] - last < s + 2) {
                seg.back().Y = arr[i];
            } else {
                seg.push_back(mp(arr[i], arr[i]));
            }
        } else {
            seg.push_back(mp(arr[i], arr[i]));
        }
        last = arr[i];
    }
    int mind = 0;
    forn(i, sz(seg)) {
        int curd = seg[i].Y - seg[i].X + 2;
        mind = max(curd, mind);
    }
    if (mind > d) doh();
    last = m;
    bool ok = true;
    vector<num> path;
    for(int i = sz(seg) - 1; i >= 0; --i) {
        int b = seg[i].X;
        int e = seg[i].Y;

        int run = last - e - 1;
        path.push_back(num(1, run));

        path.push_back(num(2, seg[i].Y - seg[i].X + 2));

        last = b - 1;

        b--;
        b -= s;

        if (b < 0) {
            ok = false;
            break;
        }

        if (i) {
            e = seg[i - 1].Y + 1;
            if (b < e) {
                ok = false;
                break;
            }
        }

    }

    path.push_back(num(1, last));

    if (!ok) doh();
    reverse(ALL(path));
    for(auto x : path) x.print();
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