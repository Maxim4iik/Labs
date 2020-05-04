//
//  car.h
//  Lab8.2
//
//  Created by Maxim Trokhimets on 04.05.2020.
//  Copyright © 2020 Maxim Trokhimets. All rights reserved.
//

#ifndef car_h
#define car_h


#pragma once
namespace CarLibrary { class SpeedLimitExceededEventArgs; }

namespace CarLibrary
{
    class Car
    {
    private:
        const double Acceleration, SpeedLimit;
        double Speed = 0;
        bool IsRiding = false;

    public:
        Car(double acceleration, double speedLimit);

        void Ride();

        void Tick();

        void Stop();

        EventHandler StartRiding;

        EventHandler StopRiding;

        EventHandler<SpeedLimitExceededEventArgs*> SpeedLimitExceeded;
    };

    class SpeedLimitExceededEventArgs : public EventArgs
    {
    public:
        const double Speed;

        SpeedLimitExceededEventArgs(double speed);
    };
}
#endif /* car_h */
