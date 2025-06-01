#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string str;
  cin >> str;

  transform(str.begin(), str.begin() + 1, str.begin(), ::toupper);
  cout << str;

  return 0;
}
