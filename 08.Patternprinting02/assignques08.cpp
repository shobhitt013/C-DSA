 #include <iostream>
 using namespace std;
 int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cout << " ";
    }
    cout << 1 << endl;
    for(int i = 1; i <= n; ++i) {
        for(int j = 0; j < n - i; j++) {
            cout << " ";
        }
        cout << i;
        for(int j = 0; j < 2 * i - 1; ++j) {
            cout << " ";
        }
        cout << i << endl;
    }
    return 0;
 }