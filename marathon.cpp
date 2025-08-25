#include <iostream>
using namespace std;

int main() {

  int races;
  cin >> races;

  while (races--) {
    int dist[4];
    cin >> dist[0] >> dist[1] >> dist[2] >> dist[3];
    int count = 0;
    for (auto i : dist) {
      if (i > dist[0])
        count++;
    }
    cout << count << endl;
  }

  return 0;
}
