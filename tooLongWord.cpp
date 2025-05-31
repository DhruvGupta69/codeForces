#include <iostream>
#include <string>
using namespace std;

string tooLong(string str) {

  if (str.length() > 10) {
    int len = str.length() - 2;
    string res = str[0] + to_string(len) + str[str.length() - 1];
    return res;
  }

  return str;
}

int main() {

  int n;
  cin >> n;
  string strs[n];

  for (int i = 0; i < n; i++) {
    cin >> strs[i];
    strs[i] = tooLong(strs[i]);
  }

  for (int i = 0; i < n; i++) {
    cout << strs[i] << endl;
  }

  return 0;
}
