#include <iostream>

int main() {
    int n = 4; // Number of rows in the top half of the diamond (excluding the middle row)

    // Print the top half of the diamond including the middle row
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    // Print the bottom half of the diamond
    for (int i = n - 1; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
