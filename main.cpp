#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) (x).begin(), (x).end()

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

const int INF = 1e9 + 5;
const ll LINF = 1e18;
const ll MOD = 1e9 + 7;
const int N = 1e6;

void fast_io() {
  ios::sync_with_stdio(0);
  cin.tie(0);
}

#ifdef DEBUG
#define dbg(...) cerr << "[" << #__VA_ARGS__ << "]: ", debug_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

void debug_out() { cerr << endl; }

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

template <typename T, typename... Args>
void debug_out(T x, Args... args) {
  cerr << x;
  if (sizeof...(args)) cerr << ", ";
  debug_out(args...);
}

ll gcd(ll a, ll b) {
  if (!b) return a;
  return gcd(b, a % b);
}

int main() {
  fast_io();

  int t = 1;
  // cin >> t;

  while (t--) {
    
  }

  return 0;
}

// g++ main.cpp -o main && ./main
// g++ -DDEBUG main.cpp -o main && ./main
// g++ main.cpp -DDEBUG -o main && ./main < input.txt > output.txt
