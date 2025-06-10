#include <iostream>
using namespace std;
int main() {
    int n;
    char count = 'A';
    cout << "Enter n here: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {

            cout <<count << " ";
            count++;
        }
        cout << endl;
    }

    return 0;
}
