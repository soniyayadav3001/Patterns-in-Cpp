#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter n here: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {

            cout <<i+j-1<< " ";
    
        }
        cout << endl;
    }

    return 0;
}
