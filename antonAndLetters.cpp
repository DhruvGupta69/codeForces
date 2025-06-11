#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {

  string str;
  getline(cin, str);

  set<char> s;

  for (auto ch : str) {
    if (ch >= 'a' && ch <= 'z')
      s.insert(ch);
  }

  cout << s.size();

  return 0;
}
