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
//int magic[4][4] = {{1, 14, 14, 4},
//                 {11, 7,  6,  9},
//                 {8,  10, 10, 5},
//                 {13, 2, 3, 15}
//};
//
//int dx[] = {1, -1, 1, -1};//{1,  1, 1, -1, -1, -1, 0,  0};
//int dy[] = {-1, 1, 1, -1};//{-1, 0, 1, -1,  0,  1, 1, -1};
//
//set<vector<pii> > ss;
//bool used[10][10];
//
//int dfs(int x, int y) {
//    used[x][y] = true;
//    int ans = 1;
//    forn(i, 4) {
//        int tox = x + dx[i];
//        int toy = y + dy[i];
//        if (tox < 0 || toy < 0) continue;
//        if (used[tox][toy]) continue;
//        ans += dfs(tox, toy);
//    }
//    return ans;
//}
//void check(vector<pii> arr) {
//    int sum = 0;
//    forn(i, sz(arr)) sum += magic[arr[i].X][arr[i].Y];
//    if (sum != 33) return;
//    forn(i, 10) forn(j, 10) {
//            used[i][j] = true;
//        }
//    sort(ALL(arr));
//    forn(i, sz(arr)) used[arr[i].X][arr[i].Y] = false;
//    int cnt = dfs(arr.back().X, arr.back().Y);
//    if (cnt == 4) ss.insert(arr);
//}
//
//void solve() {
//    int ans = 0;
//    forn(x1, 4) forn(x2, 4) forn(x3, 4) forn(x4, 4)
//    forn(y1, 4) forn(y2, 4) forn(y3, 4) forn(y4, 4) {
//                    vector<pii> arr;
//                    arr.push_back(mp(x1, y1));
//                    arr.push_back(mp(x2, y2));
//                    arr.push_back(mp(x3, y3));
//                    arr.push_back(mp(x4, y4));
//                    sort(ALL(arr));
//                    arr.erase(unique(ALL(arr)), arr.end());
//                    if (sz(arr) != 4) continue;
//                    check(arr);
//                }
//    ans = sz(ss);
//    for(auto x : ss) {
//        int sum = 0;
//        for(auto y : x) {
//            printf("(%d, %d)\t", y.X, y.Y);
//            sum += magic[y.X][y.Y];
//        }
//        cout << " " << sum;
//        printf("\n");
//    }
//    cout << ans << "\n";
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