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

ll count(int n, vector<int> arr) {
    ll sum = 0;
    vector<int> dist(n + 1, 1e+9);
    forn(i, sz(arr)) {
        int num = arr[i];
        if (dist[num] == 1e+9) dist[num] = -i;
        else dist[num] += i;
    }
    forn(ii, n) {
        int i = ii + 1;
        sum += (n - i) * abs(dist[i] + i - n);
    }
    return sum;
}

void stress(int n) {
    vector<int> arr;
    forn(i, n) arr.push_back(i + 1), arr.push_back(i + 1);
    vector<int> perm(n * 2);
    forn(i, sz(perm)) perm[i] = i;
    vector<int> best;
    int bsum = 1e+9;
    do {
        vector<int> curv(n * 2);
        forn(i, sz(curv)) curv[perm[i]] = arr[i];
        int cursum = count(n, curv);
        if (cursum < bsum) {
            best = curv;
            bsum = cursum;
        }
        if (bsum == 0) break;
    } while(next_permutation(ALL(perm)));
    cout << bsum << "\n";
    for(auto x : best) {
        cout << x << " ";
    }
    cout << "\n";
}

void solve() {
    int n;
    scanf("%d", &n);
    if (n == 2) {
        cout << "1 1 2 2\n";
        return;
    }

    vector<int> res;
    vector<int> l, r;
    if (n & 1) {
        for (int i = 1; i <= n - 1; i += 2) l.push_back(i);
        for (int i = 2; i <= n - 1; i += 2) r.push_back(i);
        for (int x : l) res.push_back(x);
        res.push_back(n);
        reverse(ALL(l));
        for (int x : l) res.push_back(x);
        for (int x : r) res.push_back(x);
        reverse(ALL(r));
        for (int x : r) res.push_back(x);
        res.push_back(n);
    } else {
        for (int i = 1; i <= n - 1; i += 2) l.push_back(i);
        for (int i = 2; i <= n - 2; i += 2) r.push_back(i);
        for (int x : l) res.push_back(x);
        reverse(ALL(l));
        for (int x : l) res.push_back(x);
        for (int x : r) res.push_back(x);
        reverse(ALL(r));
        res.push_back(n);
        for (int x : r) res.push_back(x);
        res.push_back(n);
    }
    //cout << count(n, res) << "\n";
    for(auto x : res) printf("%d ", x);
    printf("\n");
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