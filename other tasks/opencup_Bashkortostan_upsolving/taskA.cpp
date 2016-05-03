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
//#include <unordered_map>
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
//    char type, color;
//    int index;
//
//    num() { }
//
//    num(char type, char color, int index) {
//        this->type = type;
//        this->color = color;
//        this->index = index;
//    }
//
//    void print() {
//        printf("%c %d %c\n", type, index, color);
//    }
//};
//
//const int maxn = 3010;
//char arr[maxn][maxn];
//unordered_map<char, int> mm[2 * maxn];
//
//void rem(unordered_map<char, int> &colors, char color) {
//    int cnt = --colors[color];
//    if (cnt == 0)
//        colors.erase(color);
//}
//
//void show(int n){
//    return;
//    cout << "---------\n";
//    forn(i, n) {
//        forn(j, n) {
//            cout << arr[i][j];
//        }
//        cout << "\n";
//    }
//    cout << "\n";
//}
//void solve() {
//    int n;
//    scanf("%d", &n);
//    string s;
//    forn(i, n) {
//        cin >> s;
//        forn(j, len(s))
//            arr[i][j] = s[j];
//    }
//    forn(i, n) {
//        forn(j, n) {
//            if(arr[i][j] == '?') continue;
//            mm[i][arr[i][j]]++;
//        }
//    }
//    forn(j, n) {
//        forn(i, n) {
//            if (arr[i][j] == '?') continue;
//            mm[n + j][arr[i][j]]++;
//        }
//    }
//    vector<num> answer;
//    vector<bool> used(n + n);
//    forn(iter, n + n) {
//        num cur;
//
//        pii top(1e+9, 0);
//        forn(i, n + n) if (!used[i] && sz(mm[i]) < top.X) {
//                top.X = sz(mm[i]);
//                top.Y = i;
//            }
//        used[top.Y] = true;
//
//        if (top.Y >= n) cur.type = 'v';
//        else cur.type = 'h';
//
//        if (top.X == 0) {
//            cur.color = 'a';
//        } else {
//            cur.color = mm[top.Y].begin()->X;
//            if (cur.type == 'v')
//                forn(i, n) {
//                    int j = top.Y - n;
//                    if (arr[i][j] == '?') continue;
//                    arr[i][j] = '?';
//                    rem(mm[i], cur.color);
//                }
//            else
//                forn(j, n) {
//                    int i = top.Y;
//                    if (arr[i][j] == '?') continue;
//                    arr[i][j] = '?';
//                    rem(mm[j + n], cur.color);
//                }
//        }
//
//        cur.index = top.Y % n + 1;
//
//        answer.push_back(cur);
//        show(n);
//    }
//    reverse(ALL(answer));
//    for(auto x : answer) x.print();
//    printf("\n");
//}
//
//int main() {
//#ifdef _DEBUG
//    freopen("input.txt", "r", stdin);
//    //freopen("output.txt", "w", stdout);
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