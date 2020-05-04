using CarLibrary;
using System;

namespace CarApp
{
    class Program
    {
        static void OnStartRiding(object sender, EventArgs e)
        {
            Console.WriteLine("Event: Start Riding");
        }

        static void OnStopRiding(object sender, EventArgs e)
        {
            Console.WriteLine("Event: Stop Riding");
        }

        static void OnSpeedLimitExceeded(object sender, SpeedLimitExceededEventArgs e)
        {
            Console.WriteLine("Event: Speed Limit Exceeded, Speed={0}", e.Speed);
        }

        static void Main(string[] args)
        {
            Console.WriteLine("hello world");

            Console.Write("enter car acceleration: ");
            double acceleration = double.Parse(Console.ReadLine());

            Console.Write("enter car speed limit: ");
            double speedLimit = double.Parse(Console.ReadLine());

            Car car = new Car(acceleration, speedLimit);

            car.StartRiding += OnStartRiding;
            car.StopRiding += OnStopRiding;
            car.SpeedLimitExceeded += OnSpeedLimitExceeded;

            while (true)
            {
                Console.WriteLine();
                Console.WriteLine("options:");
                Console.WriteLine("  1) Ride");
                Console.WriteLine("  2) Stop");
                Console.WriteLine("  3) Tick");
                Console.WriteLine("  4) Exit");

                Console.Write("i want to: ");
                int option = int.Parse(Console.ReadLine());

                if (option == 4)
                {
                    Console.WriteLine("bye");
                    break;
                }

                switch (option)
                {
                    case 1:
                        car.Ride();
                        break;
                    case 2:
                        car.Stop();
                        break;
                    case 3:
                        car.Tick();
                        break;
                    default:
                        Console.WriteLine("invalid option");
                        break;
                }
            }

            Console.ReadKey();
        }
    }
}
