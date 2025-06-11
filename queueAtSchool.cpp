#include <iostream>
#include <string>
#include <utility>
using namespace std;

int main() {
  int students, sec;
  string queue;
  cin >> students >> sec >> queue;

  while (sec--) {
    for (int i = 0; i < students - 1; i++) {
      if (queue[i] == 'B' && queue[i + 1] == 'G') {
        swap(queue[i], queue[i + 1]);
        i++;
      }
    }
  }

  cout << queue;

  return 0;
}
