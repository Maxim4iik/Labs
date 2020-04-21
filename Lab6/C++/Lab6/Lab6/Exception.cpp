//
//  Exception.cpp
//  Lab6
//
//  Created by Maxim Trokhimets on 21.04.2020.
//  Copyright © 2020 Maxim Trokhimets. All rights reserved.
//

#include "Exception.h"

Exception::Exception(double a, double b, double c) {
    this->a = a;
    this->b = b;
    this->c = c;
}

double Exception::value()
{
    try
    {
        if (b/c == 42)
        {
           throw "";
        }
    }

    catch (const char *str)
    {
        std::cout << "Ошибка " << str << " - на 0 делить нельзя!" << std::endl;
    }

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

    return (log(a*b + 2) * c) / (41 - b/c + 1);
}
