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
//int gcd(int a, int b) {
//    while(b) {
//        a %= b;
//        swap(a, b);
//    }
//    return a;
//}
//
//const int maxn = 1e+6;
//ll phi[maxn];
//int prime[maxn];
//
//void precalc() {
//    for(int i = 2; i < maxn; ++i)
//        if (prime[i] == 0) {
//            for(int j = i; j < maxn; j += i)
//                prime[j] = i;
//        }
//    phi[1] = 1;
//    for(int i = 2; i < maxn; ++i) {
//        if (prime[i] == i) phi[i] = i - 1;
//        else {
//            int ptr = i;
//            ll curPhi = 1;
//            while(prime[ptr] == prime[i])
//                ptr = ptr / prime[i], curPhi *= prime[i];
//            curPhi = curPhi / prime[i] * (prime[i] - 1);
//            phi[i] = curPhi * phi[ptr];
//        }
//    }
//}
//
//void solve() {
//    precalc();
//    ll k;
//    cin >> k;
//    forn(i, maxn) {
//        if (k <= phi[i]) {
//            for(int j = 1; j <= i; ++j) {
//                if (gcd(i, j) == 1) k--;
//                if (k == 0) {
//                    cout << j << '/' << i << "\n";
//                    break;
//                }
//            }
//        } else {
//            k -= phi[i];
//        }
//        if (k == 0) break;
//    }
//    cerr << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
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