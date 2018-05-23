using System;

namespace ConsoleApp2
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] input = Console.ReadLine().Split(' ');
            int x = int.Parse(input[0]);
            int y = int.Parse(input[1]);
            if(x * x + y * y <= 100 * 100)
                Console.WriteLine("inside");
            else
                Console.WriteLine("outside");
        }
    }
}
