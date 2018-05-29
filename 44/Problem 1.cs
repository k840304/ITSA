using System;

namespace Main
{
    class Program
    {
        static void Main(string[] args)
        {
            int cases = int.Parse(Console.ReadLine());
            while(cases > 0)
            {
                string[] input = Console.ReadLine().Split(' ');
                if(int.Parse(input[0]) <= 100 && int.Parse(input[1]) <= 100)
                    Console.WriteLine("inside");
                else
                    Console.WriteLine("outside");
                cases--;
            }
        }
    }
}
