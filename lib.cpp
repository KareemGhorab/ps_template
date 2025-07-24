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

ll gcd(ll a, ll b) {
  if (!b) return a;
  return gcd(b, a % b);
}

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

ll ncr(int n, int r) { return divide(fact[n], mul(fact[r], fact[sub(n, r)])); }

ll npr(int n, int r) { return divide(fact[n], fact[sub(n, r)]); }