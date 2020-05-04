using System;

namespace CarLibrary
{
    public class Car
    {
        private readonly double Acceleration, SpeedLimit;
        private double Speed;
        private bool IsRiding;

        public Car(double acceleration, double speedLimit)
        {
            Acceleration = acceleration;
            SpeedLimit = speedLimit;
        }

        public void Ride()
        {
            if (!IsRiding)
            {
                IsRiding = true;
                StartRiding(this, new EventArgs());
            }
        }

        public void Tick()
        {
            if (IsRiding)
            {
                Speed += Acceleration;
                if (Speed > SpeedLimit)
                {
                    SpeedLimitExceeded(this, new SpeedLimitExceededEventArgs(Speed));
                }
            }
        }

        public void Stop()
        {
            if (IsRiding)
            {
                IsRiding = false;
                Speed = 0;
                StopRiding(this, new EventArgs());
            }
        }

        public EventHandler StartRiding;

        public EventHandler StopRiding;

        public EventHandler<SpeedLimitExceededEventArgs> SpeedLimitExceeded;
    }

    public class SpeedLimitExceededEventArgs : EventArgs
    {
        public readonly double Speed;

        public SpeedLimitExceededEventArgs(double speed)
        {
            Speed = speed;
        }
    }
}
