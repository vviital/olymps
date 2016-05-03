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
//#define pii pair<int, char>
//#define pll pair<ll, ll>
//#define pdd pair<double, double>
//
//vector<pii> check(int P, int B, int Z, int E, int R, int U, int I, int C, int H, int S) {
//    vector<pii> vals;
//    vals.pb(mp(P, 'P'));
//    vals.pb(mp(B, 'B'));
//    vals.pb(mp(Z, 'Z'));
//    vals.pb(mp(E, 'E'));
//    vals.pb(mp(R, 'R'));
//    vals.pb(mp(U, 'U'));
//    vals.pb(mp(I, 'I'));
//    vals.pb(mp(C, 'C'));
//    vals.pb(mp(H, 'H'));
//    vals.pb(mp(S, 'S'));
//    sort(ALL(vals));
//    vals.erase(unique(ALL(vals)), vals.end());
//    if ((P * 10 + B) * Z != P * 100 + R * 10 + P) return vector<pii>();
//    if ((P * 10 + B) + U * 10 + U != I * 100 + C * 10 + R) return vector<pii>();
//    if (C * 10 + R + H != B) return vector<pii>();
//    if (C * 10 + R + H != B) return vector<pii>();
//    if (U * 10 + 2 * U != B * 10 + E) return vector<pii>();
//    if (Z * U != S * 10 + H) return vector<pii>();
//    if (P * 100 + R * 10 + P - B * 10 - E != I * 100 + S * 10 + B) return vector<pii>();
//    return vals;
//}
//
//void solve() {
//    vector<int> perm(10);
//    forn(i, sz(perm)) perm[i] = i;
//    do {
//        vector<pii> ans = check(perm[0], perm[1], perm[2], perm[3], perm[4], perm[5], perm[6], perm[7], perm[8], perm[9]);if (sz(ans)) {
//            forn(i, sz(ans))
//                cout << ans[i].Y;
//            cout << endl;
//        }
//    } while(next_permutation(ALL(perm)));
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