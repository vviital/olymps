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

void show(vector<vector<char> > arr) {
    return;
    forn(i, sz(arr)) {
        forn(j, sz(arr[i])) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

vector<vector<char> > rotate(vector<vector<char> > a) {
    vector<vector<char> > res(sz(a[0]), vector<char>(sz(a)));
    forn(i, sz(a)) forn(j, sz(a[i])) {
            res[sz(a[i]) - j - 1][i] = a[i][j];
        }
    return res;
}

string encrypt(string s, int n, int m) {
    while (n * m < len(s)) {
        if (n >= m) m += n;
        else n += m;
    }
    vector<vector<char> > arr1(n, vector<char>(m));
    for (int i = 0; i < len(s); i += m) {
        for (int j = 0; j < m && i + j < len(s); ++j) {
            arr1[i / m][j] = s[i + j];
        }
    }
    forn(i, n) forn(j, m) {
            int add = 2 + i + j;
            if (arr1[i][j] == 0) continue;
            arr1[i][j] = (arr1[i][j] - 'a' + add) % 26 + 'a';
        }
    forn(i, n) for (int j = 0; j < m; j += 2) {
            if (j + 1 < m && arr1[i][j] && arr1[i][j + 1]) {
                swap(arr1[i][j], arr1[i][j + 1]);
            }
        }
    arr1 = rotate(arr1);
    string res = "";
    forn(i, sz(arr1)) forn(j, sz(arr1[i])) {
            if (arr1[i][j]) res.push_back(arr1[i][j]);
        }
    return res;
}

string decrypt(string s, int n, int m) {
    while (n * m < len(s)) {
        if (n >= m) m += n;
        else n += m;
    }
    swap(n, m);
    vector<vector<char> > arr1(n, vector<char>(m, 1));
    int can = len(s);
    forn(j, m) for(int i = n - 1; i >= 0 && can; --i)
            arr1[i][j] = 0, can--;
    int ptr = 0;
    forn(i, n) forn(j, m)
            if (arr1[i][j] == 1) {
                arr1[i][j] = 0;
            } else {
                arr1[i][j] = s[ptr++];
            }
    show(arr1);
    forn(iter, 3)
        arr1 = rotate(arr1);
    n = sz(arr1), m = sz(arr1[0]);
    forn(i, n) for (int j = 0; j < m; j += 2) {
            if (j + 1 < m && arr1[i][j] && arr1[i][j + 1]) {
                swap(arr1[i][j], arr1[i][j + 1]);
            }
        }
    forn(i, n) forn(j, m) {
            int add = 2 + i + j;
            if (arr1[i][j] == 0) continue;
            arr1[i][j] = ((arr1[i][j] - 'a' - add) % 26 + 26) % 26 + 'a';
        }
    string res = "";
    forn(i, sz(arr1)) forn(j, sz(arr1[i])) {
            if (arr1[i][j]) res.push_back(arr1[i][j]);
        }
    return res;
}

void stress() {
    int size = 3;
    forn(iter, 100000) {
        int n = rand() % 5 + 1, m = rand() % 5 + 1;
        if (iter % 100 == 0) cerr << iter << "\n";
        string s;
        forn(i, size) s.push_back(rand() % 26 + 'a');
        string to = encrypt(s, n, m);
        string res = decrypt(to, n, m);
//        cerr << s << "\n";
//        cerr << res << "\n";
        if (res != s) {
            cout << "ERROR\n";
            cout << res << "\n" << s << "\n";
            exit(1);
        }
    }
}
void solve() {
    stress();
    return;
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    string res = decrypt(s, n, m);
    cout << res << "\n";
}

int main() {
#ifdef _DEBUG
    //freopen("input.txt", "r", stdin);
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