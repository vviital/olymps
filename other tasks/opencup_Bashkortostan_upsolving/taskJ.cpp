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
//struct num {
//    bool was;
//
//    int value;
//    ll x1, x2;
//
//    num() {
//        x1 = x2 = value = was = 0;
//        value = 1e+9;
//    }
//
//    num(bool was) {
//        this->was = was;
//        x1 = x2 = value = 0;
//    }
//
//    void setBit(int index) {
//        if (index < 60) {
//            x1 |= 1LL << index;
//        } else {
//            index -= 60;
//            x2 |= 1LL << index;
//        }
//    }
//
//    void print(int n) {
//        forn(i, n) {
//            int index = i;
//            if (index < 60) {
//                bool val = x1 & (1LL << index);
//                cout << (int) val;
//            } else {
//                index -= 60;
//                bool val = x2 & (1LL << index);
//                cout << (int) val;
//            }
//        }
//        cout << "\n";
//    }
//};
//
//const int maxval = 1e+6 + 10;
//int n;
//
//num solve(vector<int> a, int p, vector<int> b, int q) {
//    vector<num> dp(max(p, q) + 1);
//    dp[0] = num(true);
//    forn(iter, n) {
//
//        for(int i = sz(dp) - 1; i >= 0; --i) {
//            if (!dp[i].was) continue;
//            num val = dp[i];
//            val.setBit(iter);
//            int tox = i + a[iter];
//            int toy = val.value + b[iter];
//            if (tox >= p && toy >= q) continue;
//            if (tox < p && toy < q) {
//                if (dp[tox].value > toy) {
//                    val.value = toy;
//                    dp[tox] = val;
//                }
//                continue;
//            }
//
//            return val;
//        }
//    }
//    return num(false);
//}
//
//void solve() {
//    scanf("%d", &n);
//    vector<int> costa(n), costb(n);
//    int p, q;
//    scanf("%d", &p);
//    forn(i, n) scanf("%d", &costa[i]);
//    scanf("%d", &q);
//    forn(i, n) scanf("%d", &costb[i]);
//
//    swap(costa, costb), swap(p, q);
//
//    num slv1 = solve(costa, p, costb, q);
//    swap(costa, costb), swap(p, q);
//    num slv2(false);
//    if (!slv1.was)
//        slv2 = solve(costa, p, costb, q);
//
//    if (slv1.was) {
//        cout << "NO\n";
//        slv1.print(n);
//        return;
//    }
//    if (slv2.was) {
//        cout << "NO\n";
//        slv2.print(n);
//        return;
//    }
//    cout << "YES\n";
//
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