//
//  main.cpp
//  Lab2.1
//
//  Created by Maxim Trokhimets on 15.02.2020.
//  Copyright © 2020 Maxim Trokhimets. All rights reserved.
//

#include <iostream>
#include "func.h"

using namespace std;

//равенство
bool func1(int x, int x1)
{
    int *p;
    int *p1;
    p = &x;
    p1 = &x1;
    if ((*p ^ *p1) == 0)
        return true;
    else
        return false;
}

//сумма
void func2(int y, int y1, int &result)
{
    result = (y | y1);
}
