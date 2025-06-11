#include <iostream>
#include <vector>
using namespace std;

bool canPass(const vector<int> &doors, int x) {
  int n = doors.size();

  for (int i = 0; i <= n - x; ++i) {
    bool ok = true;

    for (int j = 0; j < i; ++j) {
      if (doors[j] == 1) {
        ok = false;
        break;
      }
    }

    for (int j = i + x; j < n; ++j) {
      if (doors[j] == 1) {
        ok = false;
        break;
      }
    }

    if (ok)
      return true;
  }

  return false;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, x;
    cin >> n >> x;

    if (x >= n) {
      cout << "YES" << endl;
      continue;
    }

    vector<int> doors(n);
    for (int i = 0; i < n; ++i) {
      cin >> doors[i];
    }

    if (canPass(doors, x)) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
  return 0;
}
