// Created by Isaac Kosloski on 14/06/2025.
// Using lambda, but with logic capture

#include <iostream>

int main()
{
    int exclamations{1};
    // captura por referência todas as variáveis externas usadas dentro da lambda (no caso, exclamations).
    [&]()-> void
    {
        std::cout << "Hello, World";
        while (exclamations--) std::cout << "!";
        std::cout << std::endl;
    }();
}
