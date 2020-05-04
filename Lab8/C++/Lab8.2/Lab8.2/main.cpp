//
//  main.cpp
//  Lab8.2
//
//  Created by Maxim Trokhimets on 04.05.2020.
//  Copyright © 2020 Maxim Trokhimets. All rights reserved.
//

#include <iostream>

#include "Program.h"
#include "Car.h"

using namespace CarLibrary;

namespace CarApp
{

    void Program::OnStartRiding(std::any sender, EventArgs *e)
    {
        std::wcout << L"Event: Start Riding" << std::endl;
    }

    void Program::OnStopRiding(std::any sender, EventArgs *e)
    {
        std::wcout << L"Event: Stop Riding" << std::endl;
    }

    void Program::OnSpeedLimitExceeded(std::any sender, SpeedLimitExceededEventArgs *e)
    {
        std::wcout << L"Event: Speed Limit Exceeded, Speed=" << e->Speed << std::endl;
    }

    void Program::Main(std::vector<std::wstring> &args)
    {
        std::wcout << L"hello world" << std::endl;

        std::wcout << L"enter car acceleration: ";
        double acceleration = std::stod(Console::ReadLine());

        std::wcout << L"enter car speed limit: ";
        double speedLimit = std::stod(Console::ReadLine());

        Car *car = new Car(acceleration, speedLimit);

        car->StartRiding += OnStartRiding;
        car->StopRiding += OnStopRiding;
        car->SpeedLimitExceeded += OnSpeedLimitExceeded;

        while (true)
        {
            std::wcout << std::endl;
            std::wcout << L"options:" << std::endl;
            std::wcout << L"  1) Ride" << std::endl;
            std::wcout << L"  2) Stop" << std::endl;
            std::wcout << L"  3) Tick" << std::endl;
            std::wcout << L"  4) Exit" << std::endl;

            std::wcout << L"i want to: ";
            int option = std::stoi(Console::ReadLine());

            if (option == 4)
            {
                std::wcout << L"bye" << std::endl;
                break;
            }

            switch (option)
            {
                case 1:
                    car->Ride();
                    break;
                case 2:
                    car->Stop();
                    break;
                case 3:
                    car->Tick();
                    break;
                default:
                    std::wcout << L"invalid option" << std::endl;
                    break;
            }
        }

        Console::ReadKey();

        delete car;
    }
}
