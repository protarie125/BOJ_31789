#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll n, x, s, c, p;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n >> x >> s;
  auto mv = 0;
  while (0 < (n--)) {
    cin >> c >> p;

    if (c <= x) {
      mv = max<ll>(mv, p);
    }
  }

  if (s < mv) {
    cout << "YES";
  } else {
    cout << "NO";
  }

  return 0;
}