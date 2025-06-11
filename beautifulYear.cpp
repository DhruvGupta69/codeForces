#include <iostream>
#include <set>
#include <string>
using namespace std;

bool hasUniqueDigits(int n) {
  set<char> digits;
  string year = to_string(n);

  for (char num : year) {
    if (digits.count(num)) {
      return false;
    }
    digits.insert(num);
  }

  return true;
}

int main() {
  int year;
  cin >> year;

  while (true) {
    year++;
    if (hasUniqueDigits(year)) {
      cout << year;
      break;
    }
  }

  return 0;
}
