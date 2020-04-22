//
//  Exception.h
//  Lab6
//
//  Created by Maxim Trokhimets on 21.04.2020.
//  Copyright © 2020 Maxim Trokhimets. All rights reserved.
//

#ifndef Exception_h
#define Exception_h

#include<math.h>
#include<iostream>


class Exception {
private: double a, b;
public: Exception(double a, double b);
    public :double value();
};

#endif /* Exception_h */
