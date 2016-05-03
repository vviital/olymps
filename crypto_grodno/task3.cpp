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
//void solve() {
////    string a, b;
////    cin >> a >> b;
////    forn(i, len(a)) {
////        int dist = (a[i] - b[i] + i) % 26;
////        if (dist < 0) dist += 26;
////        cout << dist << " ";
////    }
////    return;
//    vector<char> alpha;
//    for(int i = 'a'; i <= 'z'; ++i) alpha.pb(i);
//    reverse(ALL())
//    string s;
//    cin >> s;
//    for(int a = 0; a<= 33; ++a)
//        for(int b = 0; b <= 33; ++b)
//            for(int c = 0; c <= 33; ++c) {
//            cout << a << " " << b << " " << c << "\n";
//            string to = s;
//            for(int i = 0; i < len(to); ++i) {
//                int index = to[i] - 'a';
//                index = a + index * b + c * index * index;
//                index %= sz(alpha);
//                to[i] = alpha[index];
//            }
//            cout << to << "\n";
//        }
//}
//
//int main() {
//#ifdef _DEBUG
//    freopen("input.txt", "r", stdin);
//	//freopen("output.txt", "w", stdout);
//#else
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//#endif
//    solve();
//#ifdef _DEBUG
//    cout << fixed << setprecision(15) << clock() * 1. / CLOCKS_PER_SEC;
//#endif
//    return 0;
//}