// Created by Isaac Kosloski on 14/06/2025.
// Using a template

#include <iostream>

template<typename T>
void greet(T message)
{
    std::cout << message << std::endl;
}

int main()
{
    greet("Hello, World!");
}
