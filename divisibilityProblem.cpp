#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int a, b;
        cin >> a >> b;
        int rem = a % b;
        cout << (rem == 0 ? 0 : b - rem) << endl;
    }

    return 0;
}

