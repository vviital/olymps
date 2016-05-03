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
//char arr[20][20];
//
//void answer(int n, int m) {
//    forn(i, n) {
//        forn(j, m) {
//            cout << arr[i][j];
//        }
//        cout << "\n";
//    }
//}
//
//int cnt = 0;
//
//char getNextChar() {
//    return 'a' + cnt++;
//}
//
//void doh() {
//    exit(123);
//}
//
//void solve() {
//    int n, m;
//    cin >> n >> m;
//    if (n == 1 || m == 1) {
//        if (n == 1) {
//            if (m % 4 == 0) {
//                for(int i = 0; i < m; i += 4) {
//                    char let = getNextChar();
//                    forn(j, 4) arr[0][i + j] = let;
//                }
//            } else {
//                doh();
//            }
//        } else {
//            if (n % 4 == 0) {
//                for(int i = 0; i < n; i += 4) {
//                    char let = getNextChar();
//                    forn(j, 4) arr[i + j][0] = let;
//                }
//            } else {
//                doh();
//            }
//        }
//    } else {
//        for(int i = 0; i < n - 1; i += 2) {
//            for(int j = 0; j < m - 1; j += 2) {
//                char let = getNextChar();
//                forn(_i, 2) forn(_j, 2) {
//                        arr[i + _i][j + _j] = let;
//                    }
//            }
//        }
//        if (n % 2) {
//            for(int i = 0; i < m; i += 4) {
//                char let = getNextChar();
//                forn(j, 4) arr[n - 1][i + j] = let;
//            }
//        }
//        if (m % 2) {
//            for(int i = 0; i < n; i += 4) {
//                char let = getNextChar();
//                forn(j, 4) arr[i + j][m - 1] = let;
//            }
//        }
//    }
//    answer(n, m);
//}
//
//int main() {
//#ifdef _DEBUG
//    freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//    //freopen("input.txt", "r", stdin);
//    //freopen("output.txt", "w", stdout);
//#endif
//    solve();
//#ifdef _DEBUG
//    cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//    return 0;
//}