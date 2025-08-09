#include <bits/stdc++.h>

// #include <algorithm>
// #include <bitset>
// #include <cassert>
// #include <cctype>
// #include <climits>
// #include <cmath>
// #include <cstring>
// #include <deque>
// #include <iomanip>
// #include <iostream>
// #include <limits>
// #include <list>
// #include <map>
// #include <numeric>
// #include <queue>
// #include <set>
// #include <stack>
// #include <string>
// #include <unordered_map>
// #include <unordered_set>
// #include <vector>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vector<int>> vvi;
typedef vector<bool> vb;
typedef pair<int, int> pii;
typedef vector<pair<int, int>> vpii;
typedef pair<ll, ll> pll;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) (x).begin(), (x).end()
#define nl << '\n'

#pragma region Debugging

#ifdef DEBUG
#define dbg(...) cerr << "[" << #__VA_ARGS__ << "]: ", debug_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

void debug_out() { cerr << endl; }

// vector
template <typename T>
void debug_out(const vector<T>& v, size_t n = SIZE_MAX) {
  cerr << "[";
  size_t limit = min(v.size(), n);
  for (size_t i = 0; i < limit; i++) {
    cerr << v[i];
    if (i != limit - 1) cerr << ", ";
  }
  if (n < v.size()) cerr << ", ...";
  cerr << "]";
  cerr << endl;
}

// set
template <typename T>
void debug_out(const set<T>& s) {
  cerr << "{";
  auto it = s.begin();
  while (it != s.end()) {
    cerr << *it;
    ++it;
    if (it != s.end()) cerr << ", ";
  }
  cerr << "}";
  cerr << endl;
}

// map
template <typename K, typename V>
void debug_out(const map<K, V>& m) {
  cerr << "{";
  auto it = m.begin();
  while (it != m.end()) {
    cerr << it->first << ": " << it->second;
    ++it;
    if (it != m.end()) cerr << ", ";
  }
  cerr << "}";
  cerr << endl;
}

template <typename K, typename V, typename T>
void debug_out(const map<K, V, T>& m) {
  cerr << "{";
  auto it = m.begin();
  while (it != m.end()) {
    cerr << it->first << ": " << it->second;
    ++it;
    if (it != m.end()) cerr << ", ";
  }
  cerr << "}";
  cerr << endl;
}

// generic + variadic fallback
template <typename T, typename... Args>
void debug_out(T x, Args... args) {
  cerr << x;
  if (sizeof...(args)) cerr << ", ";
  debug_out(args...);
}

#pragma endregion

void fast_io() {
  ios::sync_with_stdio(0);
  cin.tie(0);
}

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

const int INF = 1e9 + 5;
const ll LINF = 1e18;
const ll MOD = 1e9 + 7;
const int N = 1e6;

int main() {
  fast_io();

  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);

  int t = 1;
  // cin >> t;

  while (t--) {
  }

  return 0;
}

// g++ main.cpp -DDEBUG -o main && ./main < input.txt > output.txt
// g++ main.cpp -DDEBUG -std=c++17 -o main && ./main < input.txt > output.txt
