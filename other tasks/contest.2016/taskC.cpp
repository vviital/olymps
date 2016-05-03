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
//    int n, k;
//    cin >> n >> k;
//    string s;
//    cin >> s;
//    vector<int> pos;
//    forn(iter, len(s)) if (s[iter] == '0') pos.push_back(iter);
//    int cnt = 0;
//    int bestans = 1e+9;
//    for(int l = 0, r = k; r < sz(pos); ++l, ++r){
//        int L = l, R = r;
//        while(R - L > 3) {
//            int m1 = L + (R - L) / 3;
//            int m2 = R - (R - L) / 3;
//            int val1 = max(pos[m1] - pos[l], pos[r] - pos[m1]);
//            int val2 = max(pos[m2] - pos[l], pos[r] - pos[m2]);
//            if (val1 > val2) L = m1;
//            else R = m2;
//        }
//        for(int j = L; j <= R; ++j) {
//            int curans = max(pos[j] - pos[l], pos[r] - pos[j]);
//            bestans = min(curans, bestans);
//        }
//    }
//    cout << bestans << "\n";
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