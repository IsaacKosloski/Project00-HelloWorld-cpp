// Created by Isaac Kosloski on 14/06/2025.
// Using pure lambda (auto-execution into the main)

#include  <iostream>

int main()
{
    []()->void{std::cout << "Hello, World!" << std::endl; }();
}
