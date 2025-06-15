// Created by Isaac Kosloski on 14/06/2025.
// Using std::ranges or std::string_view (C++20)

#include <iostream>
#include <ranges>

int main()
{
    for (char c : std::string_view("Hello, World!"))
        std::cout << c;
}