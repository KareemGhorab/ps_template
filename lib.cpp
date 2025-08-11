#include <bits/stdc++.h>
using namespace std;

#pragma region numberTheory

int mul(int a, int b, int m) { return ((a % m) * (b % m)) % m; }

int add(int a, int b, int m) { return ((a % m) + (b % m)) % m; }

int sub(int a, int b, int m) { return ((a % m - b % m + m) % m); }

int fpow(int base, int power, int m) {
  int res = 1;
  while (power) {
    if (power & 1) res = mul(res, base, m);
    power >>= 1;
    base = mul(base, base, m);
  }
  return res;
}

int modInv(int x, int m) { return fpow(x, m - 2, m); }

int divide(int a, int b, int m) { return mul(a, modInv(b, m), m); }

int gcd(int a, int b) {
  if (!b) return a;
  return gcd(b, a % b);
}

int gcd(int a, int b, int& x, int& y) {
  if (b == 0) {
    x = 1;
    y = 0;
    return a;
  }
  int x1, y1;
  int d = gcd(b, a % b, x1, y1);
  x = y1;
  y = x1 - y1 * (a / b);
  return d;
}

int lcm(int a, int b, int m) { return mul(a, divide(b, gcd(a, b), m), m); }

int npr(int n, int r, int m, vector<int>& fact) {
  if (r < 0 || r > n) return 0;
  return divide(fact[n], fact[n - r], m);
}

int ncr(int n, int r, int m, vector<int>& fact) {
  if (r < 0 || r > n) return 0;
  return divide(fact[n], mul(fact[r], fact[n - r], m), m);
}

// For non-overflowing values
int ncr(int n, int r) {
  r = min(r, n - r);
  int res = 1;
  for (int i = 1; i <= r; i++) {
    res *= n - r + i;
    res /= i;
  }
  return res;
}

int phi(int n) {
  int result = n;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      while (n % i == 0) n /= i;
      result -= result / i;
    }
  }
  if (n > 1) result -= result / n;
  return result;
}

void preCompPhi(int n, vector<int>& phi) {
  for (int i = 0; i <= n; i++) phi[i] = i;

  for (int i = 2; i <= n; i++) {
    if (phi[i] == i) {
      for (int j = i; j <= n; j += i) phi[j] -= phi[j] / i;
    }
  }
}

#pragma endregion