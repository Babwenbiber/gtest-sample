//
// Created by frede on 1/18/20.
//

#include <iostream>
#include "../Calculator.h"

int main()
{
    Calculator* c = new Calculator;
    std::cout << c->add(5,2) << std::endl;
}