#include <iostream>
#include <bits/stl_vector.h>
#include <algorithm>
#include <bits/stl_map.h>

using namespace std;

#define forn(i, n) for(int i = 0; i < n; ++i)

bool isprime(int x) {
    for(int i = 2; i * i <= x; ++i) {
        if (x % i == 0) return false;
    }
    return true;
}

map<int, int> primes(int maxn) {
    map<int, int> mm;
    int cnt = 0;
    forn(i, maxn) {
        if (isprime(i))
            mm[i] = ++cnt;
    }
    return mm;
};

map<int, int> pr;

bool fastIsPrime(int x) {
    return pr.find(x) != pr.end();
}

bool check(int x) {
    vector<int> dec, bin, rbin;
    int t = x;
    while(t) dec.push_back(x % 10), x /= 10;
    t = x;
    while(t) bin.push_back(x % 2), x /= 2;
    rbin = bin;
    reverse(rbin.begin(), rbin.end());
    if (rbin != bin) return false;
    int value = 1;
    for(auto x : dec) value *= x;
    if (!fastIsPrime(value)) return false;

    return true;
}

void solve() {
    const int maxn = 1e+6;
    ::pr = primes(maxn);
    forn(i, maxn) {
        if (check(i))
            cout << i << endl;
    }
}

int main() {
    solve();
    return 0;
}