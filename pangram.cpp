#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;

  string str;
  cin >> str;

  set<char> s;

  for (char ch : str) {
    s.insert(tolower(ch));
  }

  if (s.size() == 26)
    cout << "YES";
  else
    cout << "NO";

  return 0;
}
