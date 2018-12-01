using System;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            int inner;
            for(int outer = 0; outer < 3; outer++)
            {
                for(inner = 1;inner<2; inner++)


            }
            Console.WriteLine("Outer: {0}\tInner:{1}", outer, inner);
            Console.ReadKey();

        }
    }
}
