 #include <iostream>
 using namespace std;
 void printOddNumbers(int a, int b) {
 if(a > b) {
        printOddNumbers(b, a);
 return;
    }
 for(int i = a; i <= b; ++i) {
 if(i % 2 != 0) {
            cout << i << " ";
        }
    }
    cout<<endl;
 }
 int main() {
    int a, b;
    cin >> a >> b;
    printOddNumbers(a, b);
 }
 