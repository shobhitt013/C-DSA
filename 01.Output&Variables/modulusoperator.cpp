// #include<iostream>
// using namespace std;

// int main(){
//     int a=17;
//     int b=4;
//     int r;
//     r=a%b;
//     cout<<r<<endl;
//     cout<<-99%4;
//     //properties:
//     // if a<b: a%b=a
//     // if a%-b : a%b
//     // if(-a)%b : -(a%b)
//     // if(-a)%(-b): (-a)%b : -(a%b)

// return 0;
// }
#include <iostream>
#include <string>

using namespace std;

int main() {
    // Input the two integers a and b
    int a, b;
    cin >> a >> b;
    
    // Array for English words for numbers 1 to 9
    string englishWords[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    // Loop through each number from a to b
    for (int n = a; n <= b; ++n) {
        if (n >= 1 && n <= 9) {
            // Print the English representation for numbers between 1 and 9
            cout << englishWords[n - 1] << endl;
        } else if (n > 9) {
            // Check if the number is even or odd
            if (n % 2 == 0) {
                cout << "even" << endl;
            } else {
                cout << "odd" << endl;
            }
        }
    }
    
    return 0;
}
