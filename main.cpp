#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define all(x) (x).begin(), (x).end()
#define nl << '\n'

#pragma region Debugging

#ifdef DEBUG
#define dbg(...) cerr << "[" << #__VA_ARGS__ << "]: ", debug_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

void debug_out() { cerr << endl; }

template <typename T, typename... Args> void debug_out(T x, Args... args) {
  cerr << x;
  if (sizeof...(args))
    cerr << ", ";
  debug_out(args...);
}

#pragma endregion

void fast_io() {
  ios::sync_with_stdio(0);
  cin.tie(0);
#ifdef DEBUG
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
}

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

const ll MOD = 1e9 + 7;
const int N = 1e6;
const double EPS = 1e-9;

int main() {
  fast_io();

  int t = 1;
  // cin >> t;

  while (t--) {
  }

  return 0;
}

// g++ main.cpp -DDEBUG -std=c++17 -o main && ./main
