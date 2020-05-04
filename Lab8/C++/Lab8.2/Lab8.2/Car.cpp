//
//  car.cpp
//  Lab8.2
//
//  Created by Maxim Trokhimets on 04.05.2020.
//  Copyright © 2020 Maxim Trokhimets. All rights reserved.
//

#include <stdio.h>
#include "Car.h"

namespace CarLibrary
{

    Car::Car(double acceleration, double speedLimit) : Acceleration(acceleration), SpeedLimit(speedLimit)
    {
    }

    void Car::Ride()
    {
        if (!IsRiding)
        {
            IsRiding = true;
            EventArgs tempVar();
            StartRiding(this, &tempVar);
        }
    }

    void Car::Tick()
    {
        if (IsRiding)
        {
            Speed += Acceleration;
            if (Speed > SpeedLimit)
            {
                SpeedLimitExceededEventArgs tempVar(Speed);
                SpeedLimitExceeded(this, &tempVar);
            }
        }
    }

    void Car::Stop()
    {
        if (IsRiding)
        {
            IsRiding = false;
            Speed = 0;
            EventArgs tempVar();
            StopRiding(this, &tempVar);
        }
    }

    SpeedLimitExceededEventArgs::SpeedLimitExceededEventArgs(double speed) : Speed(speed)
    {
    }
}
