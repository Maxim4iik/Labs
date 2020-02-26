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

int main(int argc, char* argv[])
{
    int x, x1, y, y1;
    int result;
    cout << "Введите x" << endl;
    cin >> x;
    cout << "Введите x1" << endl;
    cin >> x1;
    cout << "Введите y" << endl;
    cin >> y;
    cout << "Введите y1" << endl;
    cin >> y1;
    cout<<endl;
    
    cout << std::boolalpha<<func1(-57, -57)<<endl;
    cout << func1(124, -10)<<endl;
    cout << func1(1, 2)<<endl;
    cout << func1(x, x1)<<endl;
    cout<<endl;

    
    func2(82, 46, result);
    cout <<result<<endl;
    
    func2(229, 110, result);
    cout <<result<<endl;
    
    func2(-3, 151, result);
    cout <<result<<endl;
    
    func2(y, y1, result);
    cout <<result<<endl;
    
    return 0;
}
