#include <iostream>
#include <set>
using namespace std;

int main() {

  int n;
  cin >> n;
  set<int> s;

  int x;
  cin >> x;
  int arr[x];
  for (int i = 0; i < x; i++) {
    cin >> arr[i];
    s.insert(arr[i]);
  }

  int y;
  cin >> y;
  int brr[y];
  for (int i = 0; i < y; i++) {
    cin >> brr[i];
    s.insert(brr[i]);
  }

  if (s.size() == n)
    cout << "I become the guy.";
  else
    cout << "Oh, my keyboard!";

  return 0;
}
