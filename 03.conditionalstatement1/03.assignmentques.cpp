#include<iostream>
using namespace std;

int main(){
    cout<<"enter the year: ";
    int y;
    cin>>y;
    // leap year if perfectly divisible by 400
 if (y % 400 == 0) {
 cout << y << " is a leap year.";
 }
 // not a leap year if divisible by 100
 // but not divisible by 400
 else if (y % 100 == 0) {
 cout << y << " is not a leap year.";
 }
 // leap year if not divisible by 1002
 // but divisible by 4
 else if (y % 4 == 0) {
 cout << y << " is a leap year.";
 }
 // all other years are not leap years
 else {
 cout << y << " is not a leap year.";
 }
return 0;
}