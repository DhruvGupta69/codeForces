#include <iostream>
#include <string>
using namespace std;

int main() {

  string s, t;
  cin >> s >> t;

  string ts = "";
  for (int i = t.length() - 1; i >= 0; i--) {
    ts += t[i];
  }

  if (s == ts)
    cout << "YES";
  else
    cout << "NO";

  return 0;
}
