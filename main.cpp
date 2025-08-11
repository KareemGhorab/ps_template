#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef pair<ll, ll> pll;
typedef vector<pll> vpll;
typedef vector<vpll> vvpll;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef vector<pii> vpii;
typedef vector<vpii> vvpii;

typedef vector<bool> vb;
typedef vector<vector<bool>> vvb;

typedef vector<char> vc;
typedef vector<vector<char>> vvc;

#define F first
#define S second
#define PB push_back
#define all(x) (x).begin(), (x).end()
#define nl << '\n'

#pragma region Debugging

#ifdef DEBUG
#define dbg(...) cerr << "[" << #__VA_ARGS__ << "]: ", debug_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

void debug_out() { cerr << endl; }

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
#ifdef DEBUG
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
}

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

const int INF = 1e9 + 5;
const ll LINF = 1e18;
const ll MOD = 1e9 + 7;
const int N = 1e6;
const double EPS = 1e-9;

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

// g++ main.cpp -DDEBUG -std=c++17 -o main && ./main
