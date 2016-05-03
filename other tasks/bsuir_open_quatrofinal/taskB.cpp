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
//    scanf("%d%d", &n, &k);
//    vector<int> arr(n);
//    forn(i, sz(arr)) cin >> arr[i];
//    int ans = 0;
//    forn(iter, sz(arr) + 1) {
//        vector<vector<int> > dp(iter + 1, vector<int>(n - iter + 1));
//        forn(i, sz(dp)) forn(j, sz(dp[i])) {
//                int index = i + j;
//                if (i + 1 < sz(dp)) {
//                    if (i % k == k - 1) {
//                        dp[i + 1][j] = max(dp[i][j] + arr[index], dp[i + 1][j]);
//                    } else {
//                        dp[i + 1][j] = max(dp[i][j], dp[i + 1][j]);
//                    }
//                }
//                if (j + 1 < sz(dp[i])) {
//                    int newJ = iter + j;
//                    if (newJ % k == k - 1) {
//                        dp[i][j + 1] = max(dp[i][j] + arr[index], dp[i][j + 1]);
//                    } else {
//                        dp[i][j + 1] = max(dp[i][j], dp[i][j + 1]);
//                    }
//                }
//            }
//        ans = max(ans, dp[iter][n - iter]);
//    }
//    int sum = 0;
//    forn(i, sz(arr)) sum += arr[i];
//    cout << sum - ans << "\n";
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