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

pdd getAngle(vector<pdd> &pts) {
    vector<double> angles;
    forn(iter, sz(pts)) angles.pb(atan2(pts[iter].Y, pts[iter].X));
    sort(ALL(angles));
    return mp(angles[0], angles.back());
}

int cmp(double a, double b) {
    if (fabs(a - b) < 1e-5) return 0;
    if (a > b) return 1;
    return -1;
}

bool isBelong(double l, double r, double a) {
    if (r - l > PI) {
        l += 2 * PI;
        swap(l, r);
    }
    if (cmp(a, l) >= 0 && cmp(a, r) <= 0) return true;
    if (cmp(a + 2 * PI, l) >= 0 && cmp(a + 2 * PI, r) <= 0) return true;

    return false;
}

void solve() {
    int n, m;
    vector<pdd> p0, p1;
    cin >> n;
    forn(iter, n) {
        double x, y, val;
        cin >> x >> y >> val;
        if (val == 0) {
            p0.pb(mp(x, y));
        } else {
            p1.pb(mp(x, y));
        }
    }
    pdd angle0 = getAngle(p0);
    pdd angle1 = getAngle(p1);
    cin >> m;
    forn(iter, m) {
        double x, y;
        cin >> x >> y;
        double a = atan2(y, x);
        if (isBelong(angle0.X, angle0.Y, a)) {
            cout << 0 << endl;
            continue;
        }
        if (isBelong(angle1.X, angle1.Y, a)) {
            cout << 1 << endl;
            continue;
        }
        exit(1);
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