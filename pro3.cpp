#include <iostream>

void modifyValue(int &ref) {
    ref += 10; // Modify the value of the reference variable
}

int main() {
    int originalValue = 5;
    std::cout << "Original Value: " << originalValue << std::endl;

    modifyValue(originalValue); // Pass originalValue by reference

    std::cout << "Modified Value: " << originalValue << std::endl; // Shows the change
    return 0;
}