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

ll gcd(ll a, ll b) {
    while(b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

vector<pll> ans;

void solve() {
    ll x, y;
    cin >> x >> y;
    if (gcd(x, y) != 1) {
        cout << "Impossible\n";
        return;
    }

    char a = 'A', b = 'B';

    while(true) {
        if (x == 1 && y == 1) break;
        if (x > y) {
            ll k = (x - 1) / y;
            cout << k << a;
            x -= k * y;
        } else {
            swap(a, b);
            swap(x, y);
        }
    }

}

int main() {
#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#else
    //freopen("input.txt", "r", stdin);
    /*freopen("output.txt", "w", stdout);*/
#endif
    solve();
#ifdef _DEBUG
    cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
#endif
    return 0;
}