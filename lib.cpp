#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vector<int>> vvi;
typedef vector<bool> vb;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) (x).begin(), (x).end()
#define nl << '\n'

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

const int INF = 1e9 + 5;
const ll LINF = 1e18;
const ll MOD = 1e9 + 7;
const int N = 1e6;
const double EPS = 1e-9;

#pragma region numberTheory

ll mul(ll a, ll b) { return ((a % MOD) * (b % MOD)) % MOD; }

ll add(ll a, ll b) { return ((a % MOD) + (b % MOD)) % MOD; }

ll sub(ll a, ll b) { return ((a % MOD - b % MOD + MOD) % MOD); }

ll fpow(ll base, ll power) {
  ll res = 1;
  while (power) {
    if (power & 1) res = mul(res, base);
    power >>= 1;
    base = mul(base, base);
  }
  return res;
}

ll modInv(ll x) { return fpow(x, MOD - 2); }

ll divide(ll a, ll b) { return mul(a, modInv(b)); }

vll fact(N + 1);

void preCompFact() {
  fact[0] = 1;
  for (int i = 1; i <= N; i++) {
    fact[i] = mul(fact[i - 1], i);
  }
}

ll gcd(ll a, ll b) {
  if (!b) return a;
  return gcd(b, a % b);
}

ll gcd(ll a, ll b, ll& x, ll& y) {
  x = 1, y = 0;
  ll x1 = 0, y1 = 1, a1 = a, b1 = b;
  while (b1) {
    int q = a1 / b1;
    tie(x, x1) = make_tuple(x1, x - q * x1);
    tie(y, y1) = make_tuple(y1, y - q * y1);
    tie(a1, b1) = make_tuple(b1, a1 - q * b1);
  }
  return a1;
}

ll lcm(ll a, ll b) { return mul(a, divide(b, gcd(a, b))); }

ll npr(int n, int r) {
  if (r < 0 || r > n) return 0;
  return divide(fact[n], fact[n - r]);
}

ll ncr(int n, int r) {
  if (r < 0 || r > n) return 0;
  return divide(fact[n], mul(fact[r], fact[n - r]));
}

// For non-overflowing values
ll ncr(ll n, ll r) {
  r = min(r, n - r);
  ll res = 1;
  for (ll i = 1; i <= r; i++) {
    res *= n - r + i;
    res /= i;
  }
  return res;
}

#pragma endregion