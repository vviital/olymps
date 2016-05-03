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
//#define mp(a, b) make_pair(ab)
//#define pb(a) push_back(a)
//#define X first
//#define Y second
//#define ms(x) memset(x,0,sizeof(x))
//#define ms1(x) memset(x,-1,sizeof(x))
//#define sz(x) ( (int) x.size() )
//#define len(x) ( (int) x.length() )
//#define ALL(x) x.begin(), x.end()
//#define pii pair<int, int>
//#define pll pair<ll, ll>
//#define pdd pair<double, double>
//
//char alpha[] = "АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ";
//char rot[40][567];
//
//int getIndex(string &s, int index) {
//    forn(i, 33) {
//        if (s[2 * index] == rot[0][2 * i] && s[2 * index + 1] == rot[0][2 * i + 1]) {
//            return i;
//        }
//    }
//    return 100;
//}
//
//void solve() {
//    forn(i, 40) forn(j, 560) rot[i][j] = 32;
//    setlocale(LC_CTYPE, "rus");
//    forn(i, 33) {
//        forn(iter, 33) {
//            rot[i][2 * iter] = alpha[2 * ((iter + i) % 33)];
//            rot[i][2 * iter + 1] = alpha[2 * ((iter + i) % 33) + 1];
//        }
//    }
////    forn(i, 33) {
////        cout << rot[i] << "\n";
////    }
//    string s, temp;
//    while (cin >> temp) {
//        s += temp + "  ";
//    }
//    cout << s << "\n";
////    forn(i, sz(s) / 4) {
////        swap(s[i + i], s[len(s) - 2 - i * 2]);
////        swap(s[i + i + 1], s[len(s) - 2 - i * 2 + 1]);
////        //cout << s << "\n";
////    }
////    cout << s << "\n";
////    return;
//    forn(a, 33) forn(b, 33) {
//            temp = s;
//            map<int, int> was;
//            bool ok = true;
//            forn(i, len(s) / 2) {
//                int index = getIndex(s, i);
//                int A = (a + index * b) % 33;
//                temp[2 * i] = rot[A][2 * index];
//                temp[2 * i + 1] = rot[A][2 * index + 1];
//            }
//            if (!ok) continue;
//            cout << a << " " << b << " ";
//            forn(i, len(temp)) cout << temp[i];
//            cout << endl;
//        }
//}
//
//int main() {
//#ifdef _DEBUG
//    freopen("input.txt""r"stdin);
//    //freopen("output.txt""w"stdout);
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