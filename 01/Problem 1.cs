using System;

namespace ConsoleApp2
{
    class Program
    {
        static void Main(string[] args)
        {
            while(true)
            {
                string str = Console.ReadLine();
                if (str == null) break;
                string[] input = str.Split(' ');
                int a = int.Parse(input[0]);
                int b = int.Parse(input[1]);
                int c = int.Parse(input[2]);
                if (a + b > c && a + c > b && b + c > a)
                    Console.WriteLine("fit");
                else
                    Console.WriteLine("unfit");
            }
        }
    }
}
