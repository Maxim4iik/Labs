//
//  main.cpp
//  Lab6
//
//  Created by Maxim Trokhimets on 21.04.2020.
//  Copyright © 2020 Maxim Trokhimets. All rights reserved.
//

#include "Exception.h"
#include "Exception1.h"

using namespace std;

int main()
{
    const int n = 2;
    Exception* obj[n];
    obj[0] = new Exception(1, -2);
    obj[1] = new Exception(-2, 1);
    
    for (int i = 0; i < n; i++) {
           cout << "[" << i + 1 << "] = " << obj[i]->value() << endl;
       }
    
    const int m = 2;
    Exception1* object[n];
    obj[0] = new Exception(42, 1);
    obj[1] = new Exception(84, 2);
    
    for (int k = 0; k < m; k++) {
        cout << "[" << k + 1 << "] = " << object[k]->value() << endl;
    }
   
    return 0;
}


