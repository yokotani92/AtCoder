#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int MOD = 1E9 + 7;
const int INF = 1 << 29;

int main() {
  int S, W;
  cin >> S >> W;
  if (S <= W) {
    cout << "unsafe" << endl;
  } else {
    cout << "safe" << endl;
  }
  return 0;
}