#include <iostream>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int threshold = arr[k - 1];
  int count = 0;
  for (int i = 0; i < n; i++) {
    if (threshold == 0 && arr[i] == 0)
      continue;
    else if (arr[i] >= threshold)
      count++;
  }

  cout << count;

  return 0;
}
