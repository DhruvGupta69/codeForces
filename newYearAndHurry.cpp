#include <iostream>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  int problems = 0, rem_time = 240;

  for (int i = 1; i <= n; i++) {
    if (rem_time >= k + 5 * i){
      problems++;
      rem_time -= 5*i;
    }
  }

  cout << problems;

  return 0;
}
