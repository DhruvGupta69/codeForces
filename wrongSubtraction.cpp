#include <iostream>
using namespace std;

int main() {

  int num, ops;
  cin >> num >> ops;

  while (ops != 0) {
    if (num % 10 == 0)
      num /= 10;
    else
      num--;

    ops--;
  }

  cout << num;

  return 0;
}
