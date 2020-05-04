//
//  Program.h
//  Lab8.2
//
//  Created by Maxim Trokhimets on 04.05.2020.
//  Copyright © 2020 Maxim Trokhimets. All rights reserved.
//

#ifndef Program_h
#define Program_h

#pragma once

#include <string>
#include <vector>
#include <iostream>
#include <any>

namespace CarLibrary { class SpeedLimitExceededEventArgs; }

using namespace CarLibrary;

namespace CarApp
{
    class Program
    {
    private:
        static void OnStartRiding(std::any sender, EventArgs *e);

        static void OnStopRiding(std::any sender, EventArgs *e);

        static void OnSpeedLimitExceeded(std::any sender, SpeedLimitExceededEventArgs *e);

        static void Main(std::vector<std::wstring> &args);
    };
}

#endif /* Program_h */
