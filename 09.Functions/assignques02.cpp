#include <iostream>
using namespace std;
 float area(int radius) {
 return 3.14 * radius * radius;
 }
 int main() {
    int radius;
    cin >> radius;
    cout << "Area of the circle is: " << area(radius) << " units square";
 return 0;
 }