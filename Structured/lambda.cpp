// Created by Isaac Kosloski on 14/06/2025.
// Using a lambda

#include <iostream>

int main()
{
    auto hello = []() {
        std::cout << "Hello, World!" << std::endl;
    };
    hello();
}