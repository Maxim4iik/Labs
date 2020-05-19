using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static System.Console;

namespace Lab_7
{
    class main
    {
        static void Main(string[] args)
        {
            var node = new MyStruct();
            float el;
            int n;
            float add;
            WriteLine("Enter first element: ");
            el = float.Parse(ReadLine());
            node = new MyStruct();
            node.push(el);

            int size = 0;
            WriteLine("Enter number of elements in your list: ");
            size = Convert.ToInt32(ReadLine());

            Write("Enter elements: \n");
            for (int i = 0; i < size; i++)
            {
                add = float.Parse(ReadLine());
                    node.push(add);
            }

            WriteLine($"List: ");
            node.output();

            n = node.count();
            WriteLine($"\n\nNumbers > average arithmetical: {n}");

            node.exchange();
            WriteLine($"\nNew list: ");
            node.output();

            ReadKey();
        }
    }
}