// Created by Isaac Kosloski on 14/06/2025.
// Check C++ Version
#include <iostream>

int main() {
#if defined(__GNUC__)
    std::cout << "GCC version: " << __GNUC__ << "." << __GNUC_MINOR__ << std::endl;
#endif
}
