#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter n here : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        
        for (int j = 1; j <=n-i+1;j++){
            cout <<j;
    
        }
        for (int star = i - 1; star >= 1;star--){
            cout << "*";
        }
        for (int star2 = i - 1; star2 >= 1;star2--){
            cout << "*";
        }
        for (int count = n-i+1; count >= 1;count--){
            cout <<count;
        }

            cout << endl;
    }
return 0;
}
