#include <iostream>
#include <vector>
using namespace std;

void solve(int n) {
  vector<int> round_nums;
  int place = 1;

  while (n > 0) {
    int digit = n % 10;
    if (digit != 0) {
      round_nums.push_back(digit * place);
    }
    n /= 10;
    place *= 10;
  }

  cout << round_nums.size() << endl;
  for (int num : round_nums) {
    cout << num << " ";
  }
  cout << endl;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    solve(n);
  }

  return 0;
}

