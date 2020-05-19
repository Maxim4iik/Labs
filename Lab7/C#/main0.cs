using System;
using System.Linq;
using System.Collections.Generic;
 

namespace Collections
{
    class Program
    {
        static void Main(string[] args)
        {
            List<float> numbers = new List<float>() {};
            Console.WriteLine("Enter the number of repetitions");
            int repetitions = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Enter numbers");
            for (int i = 0; i < repetitions; i++)
            {
            float num = Convert.ToSingle(Console.ReadLine());
            numbers.Insert(0, num);
            }
          Console.WriteLine("");

          double average = numbers.Average();
          Console.WriteLine(average);
          Console.WriteLine("The number of array elements, large arithmetic mean of all its elements = {0}", numbers.Where(x => x > average).Count());

          numbers = numbers.Where(i => i >= 0).ToList();

            Console.WriteLine("");
            Console.WriteLine("Reverse order of numbers without negative numbers");
            foreach (int i in numbers)
            {
                Console.WriteLine(i);
            }
        }
    }
}