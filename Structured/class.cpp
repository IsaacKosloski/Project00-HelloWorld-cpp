// Created by Isaac Kosloski on 14/06/2025.
// Using a class

#include <iostream>

class Greeter
{
    public:
        void hello()
        {
            std::cout << "Hello World!" << std::endl;
        }
};

int main()
{
    Greeter greeter;
    greeter.hello();
}