//
//  Exception.cpp
//  Lab6
//
//  Created by Maxim Trokhimets on 21.04.2020.
//  Copyright © 2020 Maxim Trokhimets. All rights reserved.
//

#include "Exception.h"
#include "Exception1.h"

Exception::Exception(double a, double b) {
    this->a = a;
    this->b = b;
}

Exception1::Exception1(double b, double c) {
    this->b = b;
    this->c = c;
}

double Exception::value()
{
    try {
        if (a*b + 2 <= 0)
        {
            throw "";
        }
    }
    catch (const char* str)
    {
        std::cout << "Ошибка " << str << " - Натуральный логарифм < 0!" << std::endl;
    }
    return (log(a*b)+2);
}

double Exception1::value(){
    try
    {
        if (b/c - 42 <= 0)
        {
           throw "";
        }
    }
    catch (const char *str)
    {
        std::cout << "Ошибка " << str << " - на 0 делить нельзя!" << std::endl;
    }
    return (41 - b/c + 1);
}
