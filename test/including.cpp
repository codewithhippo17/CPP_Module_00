#include <iostream>

#define CONCAT(name, num) name##num

int main() {
    int value1 = 10;

    std::cout << CONCAT(value, 1) << "\n";
}

