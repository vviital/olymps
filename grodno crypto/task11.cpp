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
//string alpha = "acdefhijklmnorstuvwx1234567890";
//
//ll f(ll z) {
//    return (z * z * z * z * z - z + 6);
//}
//
//ll f(ll x, ll z) {
//    return (x - 3 + 30) % 30;
//}
//
//int getind(char ch) {
//    forn(i, len(alpha))
//        if (alpha[i] == ch) return i;
//    exit(123);
//}
//
//void solve() {
//    string enc = "ftrriufleofoevvljlihlsjturewlts";
//    for(int z = 2; z <= 1000; ++z) {
//        string cur = enc;
//        forn(i, len(cur)) {
//            cur[i] = alpha[f(getind(cur[i]), z)];
//            if (getind(cur[i]) != f(getind(enc[i]), z)) {
//                exit(123);
//            }
//        }
//        cout << cur << endl;
//    }
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