#include <iostream>
using namespace std;

int main()
{
    int a=3, int b=7;
    cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << a << " " << b;
}