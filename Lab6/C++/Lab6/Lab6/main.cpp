//
//  main.cpp
//  Lab6
//
//  Created by Maxim Trokhimets on 21.04.2020.
//  Copyright © 2020 Maxim Trokhimets. All rights reserved.
//

#include"Exception.h"

using namespace std;

int main()
{
    const int n = 5;
    Exception* obj[n];
    obj[0] = new Exception(1, 42, 1);
    obj[1] = new Exception(1, -2, 1);
    obj[2] = new Exception(-2, 1, 5);
    obj[3] = new Exception(1, 84, 2);
    obj[4] = new Exception(4, 83, 56);

    for (int i = 0; i < n; i++) {
        cout << "[" << i + 1 << "] = " << obj[i]->value() << endl;
    }
    return 0;
}
