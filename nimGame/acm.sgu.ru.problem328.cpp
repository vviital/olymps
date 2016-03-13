////http://acm.sgu.ru/problem.php?contest=0&problem=328
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
//const int maxn = 1e+5 + 10;
//int dp[3][3][maxn];
//
//int getMex(vector<int> arr) {
//    sort(ALL(arr));
//    arr.erase(unique(ALL(arr)), arr.end());
//    forn(i, sz(arr))
//        if (i != arr[i]) return i;
//    return sz(arr);
//}
//
//int smartSolve(int l, int r, int n) {
//    if (l > r) swap(l, r);
//    if (r == 0) return n % 2;
//    if (l == 0) return n;
//    if (l == r) return 1;
//    return 0;
//}
//
//int solve(int l, int r, int n) {
//    return smartSolve(l, r, n);
//    if (l > r) swap(l, r);
//    if (n <= 0) return 0;
//    if (n == 1 && (!l || l == r)) return 1;
//    if (n == 1 && l != r) return 0;
//    if (dp[l][r][n] != -1) return dp[l][r][n];
//    vector<char> pos(n + 2);
//    pos[0] = l, pos[n - 1] = r;
//    vector<int> arr;
//    for(int i = 1; i <= n; ++i) {
//        forn(iter, 2) {
//            int color = iter + 1;
//            if (pos[i - 1] != color && pos[i + 1] != color) {
//                int val1 = solve(l, color, i - 1);
//                int val2 = solve(color, r, n - i);
//                arr.push_back(val1 ^ val2);
//            }
//        }
//    }
//
//    return dp[l][r][n] = getMex(arr);
//}
//
//void solve() {
////    ms1(dp);
////    forn(a, 3) forn(b, 3) forn(i, 1001) solve(a, b, i);
////    forn(a, 3) forn(b, 3) {
////            if (a > b) continue;
////            cout << a << " " << b << "\n";
////            forn(i, 1000) {
////                cout << i << "\t";
////            }
////            cout << "\n";
////            forn(i, 1000) {
////                cout << dp[a][b][i] << "\t";
////            }
////            forn(i, 1000) {
////                cout << "___";
////            }
////            cout << "\n";
////        }
////    return;
//    int n;
//    cin >> n;
//    string s;
//    cin >> s;
//    vector<int> arr(len(s));
//    forn(i, len(s)) arr[i] = s[i];
//    int res = 0;
//    for(int i = 0; i < len(s); ) {
//        if (s[i] != '0') { ++i; continue;}
//        int j = i;
//        while(j < len(s) && s[j] == '0') j++;
//        int l = 0, r = 0;
//        if (i) l = s[i - 1] - '0';
//        if (j != len(s)) r = s[j] - '0';
//        int val = solve(l, r, j - i);
//        res ^= val;
//        i = j;
//        //cerr << val << "\n";
//    }
//    if (!res)
//        cout << "SECOND\n";
//    else
//        cout << "FIRST\n";
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
//
