#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int stops;
  cin >> stops;

  pair<int, int> arr[stops];
  int capacity = 0, maxCapacity = 0;

  for (int i = 0; i < stops; i++) {
    cin >> arr[i].first >> arr[i].second;
    capacity -= arr[i].first;
    capacity += arr[i].second;
    maxCapacity = max(capacity, maxCapacity);
  }

  cout << maxCapacity;

  return 0;
}
