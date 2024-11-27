#include <iostream>

using namespace std;

int main() {
    int n, i, count = 1;

    cout << "Enter n here: ";
    cin >> n;

    for (i = 1; i <= n; i++) {
        for (int j = i; j <= i + i - 1; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
