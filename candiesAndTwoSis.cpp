#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    if (arr[i] <= 2)
      arr[i] = 0;
    else if (arr[i] % 2 == 0)
      arr[i] = (arr[i] / 2) - 1;
    else
      arr[i] = arr[i] / 2;
  }

  for (auto i : arr) {
    cout << i << endl;
  }

  return 0;
}
