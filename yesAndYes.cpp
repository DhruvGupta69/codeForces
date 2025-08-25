#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {

  int n;
  cin >> n;

  while (n--) {
    string str;
    cin >> str;
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    if (str == "yes")
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}
