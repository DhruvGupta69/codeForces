#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
  string usr_name;
  cin >> usr_name;

  unordered_set<char> s;

  for (auto ch : usr_name) {
    s.insert(ch);
  }

  if (s.size() % 2 == 0)
    cout << "CHAT WITH HER!";
  else
    cout << "IGNORE HIM!";

  return 0;
}
